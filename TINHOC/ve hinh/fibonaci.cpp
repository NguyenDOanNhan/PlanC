#include<stdio.h>
#include<math.h>
int main(){
	int n ,i=2, a=0 , b=1 , c=1 ; 
	printf("nhap vao so tu nhien n :"); scanf("%d",&n);
	while(i<=n){
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	printf("so fibonaci cua %d la %d",n,c);
}
