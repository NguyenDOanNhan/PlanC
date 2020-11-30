#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
int nhap(int a[],int &n){
	printf("\n nhap vao dso phan tu mang \n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("[%d]",i);
		scanf("%4d",&a[i]);
	}	
}
int in(int a[] ,int n){
	for(int i=0;i<n;i++)
		printf("%4d",a[i]);
}
int chen(int a[],int b[],int n , int m){
	int k , c[100];
	int h=0;
	printf("\n vi tri chen : \n"); scanf("%d",&k);
	for(int i=0;i<k;i++)
		c[h++]=a[i];
	for(int i=0;i<m;i++)
		c[h++]=b[i];
	for(int i=k;i<n;i++)
		c[h++]=a[i];	
	in(c,h);
}
int main(){
	int a[100] , b[100] , n , m;
	nhap(a,n);
	in(a,n);
	nhap(b,m);
	in(b,m);
	chen(a,b,n,m);	
}

