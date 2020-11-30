#include<iostream>
#include<string.h>
#include<stdlib.h>
				  using namespace std;
void nhap(int *a ,int &n){
	printf("Nhap vao so phan tu mang :	"); scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
void in(int *a ,int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<"	";
}
int  tinhtong(int *a ,int n){
	int tong=0;
	for(int i=0;i<n;i++)
		tong+=a[i];
	return tong;
}
int main(){
	int  n ;
	int *a=(int *)malloc(n*sizeof(int *));
	nhap(a,n);
	in(a,n);
	int tong=tinhtong(a,n);
	cout<<"	"<<tong;
	free(a);
}

