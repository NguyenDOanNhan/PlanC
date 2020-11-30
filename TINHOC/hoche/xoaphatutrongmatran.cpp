#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
main(){
	int n,i,a[100],x,vt=1;
	printf(" nhap vao so phan tu n:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("A[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	printf("%4d",a[i]);
	printf("\n nhap vao vi tri can  xoa x ="); scanf("%d",&x);
	for(i=0;i<n;i++){
		if(a[i]==x)
		a[i]=vt;
	}	
	for(i=vt;i<=n-1;i++)
	printf("%d",a[i]);
}
