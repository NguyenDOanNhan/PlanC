#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define max 5
void nhap(int a[][10] ,int &n){
	printf(" nhap  so hang: "); scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j =0 ;j <n;j++)
		{
			printf("[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void in(int a[][10] ,int n){
	for(int i=0;i<n; i++){
		for(int j=0;j<n;j++)
		printf("%4d",a[i][j]);
		printf("\n");
	}
}
void inchu(int a[][10] ,int n){
	int i , j ;
	n=max;
	for(i=0;i<max;i++){
		for(j=0;j<max;j++)
		if(a[i][j]) 	printf("!");
		else
		printf(" ");
		printf("\n");
	}
}
int main(){
	int a[10][10] , n ;
	nhap(a,n);
	in(a,n);
	inchu(a,n);
}
