#include<iostream>
#include<fstream>
	using namespace std;
void nhap(int a[] , int &n){
	fstream f1;
	f1.open("themvao.txt",ios::in);
	f1>>n;
	for(int i;i<n;i++){
		f1>>a[i];
	}
}
void in(int a[] ,int n){
	fstream f1;
	f1.open(" bainhan.txt",ios::out);
	for(int i=0;i<n;i++)
		f1<<a[i]<<"	";
	f1<<endl;
	f1.close();
}
int main(){
	int a[100] , n ;
	nhap(a,n);
	in(a,n);
	return 0;
}

