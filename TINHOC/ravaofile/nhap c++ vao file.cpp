#include<iostream>
#include<fstream>
	using namespace std;
void nhap(){
	int a[100][100] , n ;
	ofstream nhap ;
	 nhap.open("nhap.txt",ios::out);
	cout<<" moi ban nhap vao n: "; cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
	}
}
void in(){
	int a[100][100] , n ;
	ofstream nhap;
	nhap.open("nhan.txt",ios::out);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		nhap<<a[i][j]<<"	";
		nhap<<"\n";
	}
	nhap.close();
}
int main(){

	nhap();
	in();
}

