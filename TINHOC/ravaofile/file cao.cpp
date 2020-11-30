#include<iostream>
#include<fstream>
#include<string>
	using namespace std;
void ghi(){
	string s;
	ofstream file;
	file.open("file.txt",ios::out);
	cout<<"\n Nhap tring: ";
	getline(cin,s);
	file<<s<<endl;;
	cout<<" mhap vap so mguyen n";
	cin>>s;
	file<<s<<endl;
	
}
int main(){
	
	ghi();

}

