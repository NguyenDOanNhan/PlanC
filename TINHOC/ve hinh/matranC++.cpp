#include<iostream>
using namespace std;
void nhap(int a[][10] ,int &n  ,int &m){
	cout<<"nhap vao so hang:\n"; 	cin>>n ;
	cout<<" nhap vao so cot:\n";	cin>>m ;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"a["<<i<<"]["<<j<<"]";
			cin >> a[i][j] ;
		}
	}
}
void in(int a[][10], int n , int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<a[i][j]<<" " ;
			cout<<"\n";
	}
}
void matrantich(int a[][10],int b[][10] ,int n ,int m){
	int c[10][10] , k , i , j ;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=0;
			for(k=0;k<m;k++)
			c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
	}
	in(c,n,n);
}
void sapxep(int a[][10] ,int n ,int m){
	int i1, i2 , j1 , j2 , t ;
	for(i1=0;i1<n;i1++)
		for(j1=0;j1<m;j1++)
			for(i2=i1;i2<n;i2++)
				for(j2=j1;j2<m;j2++)
					if(a[i1][j1]<a[i2][j2]){
						t=a[i1][j1];
						a[i1][j1]=a[i2][j2];
						a[i2][j2]=t;
					}
	cout<<"\n Ma tran sau khi sap xep: \n" ;
	in(a,n,m);
}
int main(){
	int a[10][10] ,b[10][10] , n , m ;
	nhap(a,n,m);
	in(a,n,m);
	nhap(b,m,n);
	in(b,m,n);
	cout<<"Ma tran tich: \n";
	matrantich(a,b,n,m);
	sapxep(a,n,m);
}
