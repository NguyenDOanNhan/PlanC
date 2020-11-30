#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void nhap(int a[][10] , int &n){
	fstream f1;
	f1.open("f1.txt",ios::in);
	f1>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		{
			
			f1>>a[i][j];
		}
	}
}
void in(int a[][10] , int n){
	fstream f1;
	f1.open("file.txt",ios::out);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			f1<<a[i][j]<<" ";
			f1<<"\n";
	}
	f1.close();
}
int main(){
	int a[10][10] , n;
	nhap(a,n);
	in(a,n);
	return 0;
}

