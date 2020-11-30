#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

class Nguoi{
	public:
		char Hoten[40] , Diachi[20];
		int Tuoi;
		void NhapNg(){
			cin.ignore();
			cout<<" Ho ten: "; cin.getline(Hoten,40);
			cout<<" Dia chi: "; cin.getline(Diachi,20);
			cout<<" Tuoi: "; cin>>Tuoi; 
		}
		void XuatNg(){
			cout<<" Ho ten: "<<Hoten<<endl;
			cout<<" Dia chi: "<<Diachi<<endl;
			cout<<" Tuoi: "<<Tuoi<<endl;
		}
};
class Nhanvien:public Nguoi{
	public:
		int maNV , Chucvu;
		static int ma1;
		void NhapNV(){
			maNV = ma1++;
			Nguoi::NhapNg();
			do{
				cout<<" Chon chuc vu: "<<endl;
				cout<<"  1. Truong phong."<<endl;
				cout<<"  2. Pho phong."<<endl;
				cout<<"  3. Thu ky."<<endl;
				cout<<"  4. Ke toan."<<endl;
				cout<<"  Moi chon: "; cin>>Chucvu;
			}while(Chucvu<1||Chucvu>4);
		}
		void XuatNV(){
			cout<<"\n--\n";
			cout<<" Ma Nhan vien: "<<setw(5)<<setfill('0')<<maNV<<endl;
			Nguoi::XuatNg();
			cout<<" Chuc vu: ";
			if(Chucvu==1) cout<<"Truong phong";
			if(Chucvu==2) cout<<"Pho phong";
			if(Chucvu==3) cout<<"Thu ky";
			if(Chucvu==4) cout<<"Ke toan";
			cout<<endl;
		}
		void ghiFile(){
			ofstream f1("NV.DAT",ios::app);
			f1.write(reinterpret_cast<const char*>(this),sizeof(Nhanvien));
			f1.close();
		}
		void docFile(ifstream &f2){
			f2.read(reinterpret_cast<char*>(this),sizeof(Nhanvien));
		}
};
int Nhanvien::ma1 = 1;
bool sortbyten(const Nhanvien  &s1, const  Nhanvien   &s2) {
    return s1.Hoten < s2.Hoten;
};
void menu(){
	vector <Nhanvien> DS;
	int chon;
	do{
		cout<<"\n----QUAN LY NHAN VIEN----\n";
		cout<<"1. Them."<<endl;
		cout<<"2. Tim kiem."<<endl;
		cout<<"3. Sap xep."<<endl;
		cout<<"0. Thoat."<<endl;
		cout<<"Moi chon: "; cin>>chon;
		switch(chon){
			case 0: {
				cout<<"Ban da thoat!"<<endl;
				break;
			}
			case 1: {
				system("cls");
				int soNV;
				cout<<"Nhap so NV can them: "; cin>>soNV;
				for(int i=0;i<soNV;i++){
					Nhanvien A;
					cout<<"Nhap thong tin #"<<i+1<<endl;
					A.NhapNV();
					A.ghiFile();
					DS.push_back(A);
				}
				system("cls");
				cout<<"\n---DANH SACH---\n";
			for(int i=0;i<DS.size();i++){
				DS[i].XuatNV();
				}
				ifstream f2("NV.DAT");
				while(!f2.eof()){
					Nhanvien A;
					A.docFile(f2);
					if(!f2.eof()) A.XuatNV();
				}
				f2.close();
				break;
			}
			case 2: {
				system("cls");
				int k;
				cout<<"Nhap ma NV can tim: "; cin>>k;
				for(int i = 0;i<DS.size();i++){
					if(k==DS[i].maNV){
						DS[i].XuatNV();
					}
				}
				break;
			}
			case 3: {
				sort(DS.begin(),DS.end(),sortbyten);
				system("cls");
				cout<<"\n---DANH SACH---\n";
				for(int i=0;i<DS.size();i++){
					DS[i].XuatNV();
				}
				break;
			}
		}
	}while(chon);
}
int main(){
	menu();
	return 0;
}
