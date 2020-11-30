#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf(" NHap vao so n:");
	scanf("%d",&n);
	if(n<2) printf(" ko");
	
	for(int i=2;i<=sqrt(n);i++){
		if(n%i!=0) printf("co");
		else
		printf("ko");
	}
}
