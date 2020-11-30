#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
main(){
	int n , i , x , a[100] ;
	printf(" nhap vao so phan tu mang: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d]",i);
		scanf("%d",&a[i]);
	}
	printf(" nhap vao vi tri can xoa: "); 	scanf("%d",&x);
	int vt;
	for(i=x;i<n;i++)
		a[i-1]=a[i];
	for(i=0;i<n-1;i++)
		printf("%4d",a[i]);
}

