#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
int main(){
	int n ,a[10][10] ,  i , h=1 , d=0;
	printf(" nhap vao so n :\n"); 
	scanf("%d",&n);
	while(d<=n/2){
		for(i=d;i<=n-d-1;i++) 		a[d][i]=h++;
			for(i=d+1;i<=n-d-1;i++) 	a[i][n-d-1]=h++;
				for(i=n-d-2;i>=d;i--) 		a[n-d-1][i]=h++;
					for(i=n-d-2;i>=d+1;i--)		a[i][d]=h++;
		d++;
	}
	for(i=0;i<n;i++){
		for(int j=0;j<n;j++)
		printf("%4d",a[i][j]);
		printf("\n");
	}
}

