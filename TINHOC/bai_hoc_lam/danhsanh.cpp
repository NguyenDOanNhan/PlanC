#include<iostream>
	using namespace std;
class giadinh{
	private :
		char thanhvien[100];
		char tuoi[10];
		char sdt[10];
	public: 
	void nhap(){
		cout<<"NHap vao ten :" ;  gets(thanhvien);
		cout<<"\nNhap tuoi :" ; gets(tuoi);
		cout<<"\nNhap std : " ; gets(sdt);
	}
	void in(){
		cout<<"\nTen  : "<<thanhvien;
		cout<<"\nTuoi : "<<tuoi;
		cout<<"\nstd  : "<<sdt;
	}
};
int main(){
	giadinh nhan;
	nhan.nhap();
	nhan.in();

}

