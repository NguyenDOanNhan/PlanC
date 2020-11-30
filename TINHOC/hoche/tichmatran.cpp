
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>
void nhap(int a[][10] ,int &n ,int &m){
	printf(" nhap vao so hang m=\n");		scanf("%d",&n);
	printf(" nhap vao so cot  n=\n"); 		scanf("%d",&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		{
			printf("A[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void nhap(int b[][10] ,int m ,int n){
	printf(" nhap vao so hang m=\n");		scanf("%d",&m);
	printf(" nhap vao so cot  n=\n"); 		scanf("%d",&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
		{
			printf("B[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
}
void in(int a[][10],int n ,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		printf("%4d",a[i][j]);
		printf("\n");
	}
}
void tich(int a[][10] ,int b[][10] ,int n , int m){
	int c[10][10] , k  ;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=0;
			for(int k=0;k<m;k++)
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
	}
	printf("\n Ma Tran tich C :\n"); in(c,n,n);
}
int main(){
	int a[10][10] , b[10][10] , n ,m ;
	printf(" ma tran A:\n");
	nhap(a,n,m);
	in(a,n,m);
	printf("\n Ma Tran B:\n");
	nhap(b,n,m);
	in(b,n,m);
	tich(a,b,n,m);
}
