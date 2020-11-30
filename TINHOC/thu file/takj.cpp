#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
FILE*f1=fopen("bai1.inp","r");
FILE*f2=fopen("bai1.out","w");
int nhap(int a[][10],int &n,int &m){
	fscanf(f1,"%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{ for(int j=0;j<m;j++)
		{
			fscanf(f2,"%d",&a[i][j]);	
		}
	}
}
void in(int c[][10] ,int n ,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		fprintf(f2,"%4d",c[i][j]);
		fprintf(f2,"\n");
	}
}
void tich(int a[][10],int b[10][10],int n ,int m){
	int c[10][10] , i ,j ,k;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=0;
			for(k=0;k<m;k++)
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
	}
	in(c,n,n);	
}
main(){
	int a[10][10] ,b[10][10],t,n , m;
	fscanf(f1,"%d",&t);
	while(t--){
		nhap(a,n,m);
		
		nhap(b,m,n);
		
		tich(a,b,n,m);
	}
	fclose(f1);
	fclose(f2);
}
