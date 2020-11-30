#include<iostream>
using namespace std;
void nhap(int a[] ,int &n){
	cout <<"nhap so phan tu mang"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<" a["<<i<<"]";cin>>a[i];
	} 
}
void in(int a[] ,int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
void sapxep(int a[] ,int n){
	int t;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
int main(){
	int a[100]  , n;
	nhap(a,n);
	in(a,n);
	cout<<endl;
	sapxep(a,n);
}
