#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
main(){
	printf(" Ho va ten :Nguyen DOan Nhan\n lop:   D15CQAT04-B");
	int h , u ,i, c[10];
	int vt;
		printf("\n nhap va so phan tu h="); scanf("%d",&h);
	for(i=0;i<h;i++){
		printf("C[%d]",i);
		scanf("%d",&c[i]);
	}
		printf("\n nhap vao so U\n");
		scanf("%d",&u);
	if(u>=0&&u<=h-1)
		printf("\n u nam giua\n");
	else
		printf(" u khong nam giua\n");
	for(i=0;i<h;i++){
		printf("%4d",c[i]);
	}
	for(i=u;i<h;i++)
		c[i-1]=c[i];
	for(i=0;i<h-1;i++)
		printf("%4d",c[i]);
}

