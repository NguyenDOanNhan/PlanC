#include<stdio.h>
#include<math.h>
int main(){
	int n ;
	printf("nhap cao so n :\n"); scanf("%d",&n);
	int a=0,b=1,c=1;
	while(n>0){
		c=a+b;
		b=c;
		c=a;
	}
	printf("%d",c);
}
