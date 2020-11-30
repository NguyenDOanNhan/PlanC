#include<iostream>
using namespace std;
void nhap(int a[] ,int &n){
	cout<<" nhap vao so phan tu" <<endl; 	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]"; cin>>a[i];
	}
}
void in(int a[] ,int n){
	for(int i=0;i<n;i++)
		cout<<a[i] <<" ";
}
void max(int a[] ,int n){
	int max=a[0] ;
	for(int i=0;i<n;i++)
		if(a[i]>max) max=a[i];
	int b[1000]={0};
	for(int i=0;i<max;i++)
	b[max-a[i]]++;
	
	int min=b[0];
	for(int i=1;i<max;i++)
		if(a[i]<min) min=a[i];
		co
}
int main(){
	int a[100] , n ; 
	nhap(a,n);
	in(a,n);
	max(a,n);
}
