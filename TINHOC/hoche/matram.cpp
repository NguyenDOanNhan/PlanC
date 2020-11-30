#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
void nhap(int a[][10] ,int &n , int &m){
	printf(" nhap so hang n: ");  	 scanf("%d",&n);
	printf(" nhap so hang m: ");  	 scanf("%d",&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		{
			printf("[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void in(int c[][10] ,int n , int m ){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		printf("%4d",c[i][j]);
		printf("\n");
	}
}
void tong(int a[][10] ,int b[][10] ,int n ,int m){
	int c[10][10] ,i , j ;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			c[i][j]=a[i][j]+b[i][j];
	}
	in(c,n,m);
}
void tich(int a[][10] ,int b[][10],int n ,int m){
	int c[10][10] , k , i ,j ;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=0;
			for(k=0;k<m;j++)
				c[i][j]=c[i][j] + a[i][k]*b[k][j];
		}
	}
	in(c,n,n);
}
main(){
	int a[10][10] ,b[10][10] ,  n  , m ;
	nhap(a,n,m);
	in(a,n,m);
	nhap(b,n,m);
	in(b,n,m);
	printf("\n ma tran tich \n");
	tich(a,b,n,m);
}


