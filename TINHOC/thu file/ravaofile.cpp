#include<stdio.h>
FILE*f1=fopen("nhan.inp","r");
FILE*f2=fopen("nhan.out","w");
int main(){
	int a , b ;
	fscanf(f1,"%d%d",&a,&b);
	int s=a+b;
	fprintf(f2,"%d",s);
	fclose(f1);
	fclose(f2);
}
