#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
void nhap(int a[][10] ,int &n , int &m){
	printf("nhap vao so hang : \n"); scanf("%d",&n);
	printf("nhap vao so hang : \n"); scanf("%d",&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		{
			printf("[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void in(int a[][10] ,int n ,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		printf("%4d",a[i][j]);
		printf("\n");
	}
}
void tich(int a[][10] ,int b[][10] ,int n ,int m){
	int c[10][10] , k ;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=0;
				for(k=0;k<m;k++)
				c[i][j]=c[i][j] + a[i][k]*b[k][j];
		}
	}
	printf("\n ma tran tich \n");
	in(c,n,n);
}
main(){
	int a[10][10]  , b[10][10], n , m ;
	nhap(a,n,m);
	in(a,n,m);
	nhap(b,n,m);
	in(b,n,m);
	tich(a,b,n,m);
}

