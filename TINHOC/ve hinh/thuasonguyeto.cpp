#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	int n;
	printf(" nhap vao so tu nhien n"); scanf("%d",&n);
	int i=2;
	while(n>0){
		if(n%i==0) 
		{printf("%d",i);
		n=n/i;}
		else
		i++;
	}
}

