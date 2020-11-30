#include<iostream>
#include<string.h>
				  using namespace std;
void nhap(int a[] ,int &n){
	cout<<"so phan tu mang:\t";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"A["<<i<<"]=";
		cin>>a[i];
	}
}
void in(int a[] ,int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<"	";
}
void solanxuathien(int a[] ,int n){
	int  max=a[0]; 
	int b[1000]={0};
	for(int i=0;i<n;i++){
		if(a[i]>max) max=a[i];
	}
	for(int i=0;i<n;i++)
		b[a[i]]++;
	for(int i=0;i<=max;i++)
		if(b[i]!=0)
	cout<<"\nso lan xua hien cua "<<i<<"	la	"<<b[i]<<"\n\t";
	
}
int main(){
	int a[1000] , n;
	nhap(a,n);
	in(a,n);
	solanxuathien(a,n);
}

