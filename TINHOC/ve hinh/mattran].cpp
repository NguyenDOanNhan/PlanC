#include<stdio.h>
#include<math.h>
#include<string.h>
void nhap(int a[] ,int & n){
	printf(" nhap vao so phan tu mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("[%d]",i);
		scanf("%d",&a[i]);
	}
}
void in(int a[] ,int n){
	 	for(int i=0;i<n;i++)
			printf("%4d",a[i]);
}
void sapxep(int a[10] ,int n ){
	int i , j , t=1;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++)
			if(a[i]==a[j]) t++;
			printf("%d",i);
	}
	printf(" so %d  xuat hien %d",i,t);
}
int main(){
	int a[10] , n ;
	nhap(a,n);
	in(a,n);
	printf("\n");
	sapxep(a,n);
}
