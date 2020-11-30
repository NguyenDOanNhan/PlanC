#include<stdio.h>
int nhap(int a[][10], int &n , int &m){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
int in(int a[][10],int n, int m){
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			printf("%4d",a[i][j]);
			printf("\n");
	}
}
int sapxep(int a[][10] ,int n ,int m){
	int i1,i2,j1,j2,t;
	for(i1=0;i1<n;i1++)
		for(j2=0;j2<m;j2++)
			for(i2=i1;i2<n;i2++)
				for(j2=j1;j2<m;j2++)
					if(a[i1][j1]>a[i2][j2]){
						t=a[i1][j1];
						a[i1][j1]=a[i2][j2];
						a[i2][j2]=t;
					}
 	in(a,n,m);
}
int main(){
	int a[10][10] , n , m ;
	nhap(a,n,m);
	in(a,n,m);
	sapxep(a,n,m);
}

