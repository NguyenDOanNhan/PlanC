#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
main(){
	int  n , a[10];
	printf(" nhap vao so tu nhien:");
	scanf(" %d",&n);
	for(int i=0;i<n;i++){
		printf("[%d]",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%4d",a[i]);
	}
}

