#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
int nhap(int a[] ,int &n){
	printf("\n nhap vao so phan tu mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("[%d]",i);
		scanf("%d",&a[i]);
	}
		
}
int in(int a[],int n){
	for(int i=0;i<n;i++)
		printf("%4d",a[i]);
}
int chen(int a[] ,int b[] ,int n ,int m){
	int p , c[100] , h=0;
	printf("\n nhap vao vi tri can chen : "); scanf("%d",&p);
	for(int i=0;i<p;i++)
		c[h++]=a[i];
	for(int i=0;i<m;i++)
		c[h++]=b[i];
	for(int i=p;i<n;i++)
		c[h++]=a[i];
	in(c,h);
}

main(){
	int a[100] , b [100], n ,c[100] , m ;
	nhap(a,n);
	in(a,n);
	nhap(b,m);
	in(b,m);
	chen(a,b,n,m);
}

