#include<stdio.h>
#include<stdlib.h>
void nhap(int a[] ,int &n){
	printf("Nhap vao so phan tu mang :	"); scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
}
void in(int a[] ,int n){
	for(int i=0;i<n;i++)
		printf("%4d",a[i]);
}
int  tinhtong(int a[] ,int n){
	int tong=0;
	for(int i=0;i<n;i++)
		tong+=a[i];
	return tong;
}
int xoa(int a[],int &n , int vitrixoa ){
	for(int i=vitrixoa;i<n;i++){
		a[i]=a[i+1];
	}
	n--;
	in(a,n);
}
int main(){
	int a[100] , n ;
	nhap(a,n);
	in(a,n);
	int tong=tinhtong(a,n);
	printf("\n%d",tong);
	int vitrixoa ;
	printf("\nnhap vao vitri xoa:	");
	scanf("%d",&vitrixoa);
	xoa(a,n,vitrixoa);
}