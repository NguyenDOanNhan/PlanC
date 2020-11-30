#include<stdio.h>
#include<stdlib.h>
int Timmin(int*a,int*b)
	{
		return *a < *b ? *a:*b;
	}
int *Timmax(int *a ,int *b)
	{
		return *a>*b ? a:b;
	}
int main(){
	int *a , *b;
	a = (int *)malloc(sizeof(int *));
	b = (int *)malloc(sizeof(int*));
	printf("\n nhap vao a=");
	scanf("%d",a);
	printf("\n nhap vao b=");
	scanf("%d",b);	
	int Min=Timmin(a,b);
	int *Max=Timmax(a,b);
	printf("\n min=%d 	max=%d",Min,*Max);
	free(a);
	free(b);
}

