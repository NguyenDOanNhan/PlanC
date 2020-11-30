#include<stdio.h>
int main(){
	int a=5;
	int*b=&a;
	printf("Gia trin cua a la: %d",a);
	printf("\ndia chi cua a la: %p",&a);
	printf("\ngia trin cua b la :%d",*b);
	printf("\ndia chi cua b la0:%p ",&b);
	printf(" \nmien gia tri cua b la:%p ",b);
}
