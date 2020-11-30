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
int them(int a[] ,int &n,int vitrithem , int phantuthem){
	
	for(int i=n;i>= vitrithem+1;i--){
		a[i]=a[i-1];
	}
	a[vitrithem]=phantuthem;
	n++;
	in(a,n);
}
int main(){
	int a[100] , n ;
	nhap(a,n);
	in(a,n);
	int tong=tinhtong(a,n);
	printf("\n%d",tong);
	int vitrithem , phantuthem;
	printf("\n nhap vao vitrithem va phan tu can them ");
	scanf("%d%d",&vitrithem,&phantuthem);
	them(a,n,vitrithem,phantuthem);
}
