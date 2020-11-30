#include<stdio.h>
int nhap(int a[][10], int &n,int &m){
	printf("ma tran co n hang , m cot:	"); scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",a[i][j]);
		}
	}
}
int  in(int a[][10] , int n  ,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			printf("%4d",a[i][j]);
			printf("\n");
	}
}
int main(){
	int a[10][10] , n , m ;
	nhap(a,n,m);
	in(a,n,m);
}
