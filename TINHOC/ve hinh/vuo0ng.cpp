#include<stdio.h>
int main(){
	int n , m ;
	printf(" nhap vao so n:\n"); scanf("%d",&n);
	printf(" nhap vao so m:\n"); scanf("%d",&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m; j ++)
			if(i==n||j==1||i==j){
				printf("*");
			}
			else
			printf(" ");
			printf("\n");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
	}
}
