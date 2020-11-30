#include<iostream>
#include<fstream>

	using namespace std;
ofstream file("nhapmatran.txt");
void nhap(int a[][100] ,int n){
	cout<<" nhap vao so phan tu mang";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];		}
	}
}
void in(int a[][100] ,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		file<<a[i][j]<<"	";
		file<<"/n";
	}
	file.close();
}
int main(){
	int a[100][100] , n ;
	nhap(a,n);
	in(a,n);

}

