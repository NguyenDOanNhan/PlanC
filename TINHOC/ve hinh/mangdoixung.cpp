#include<stdio.h>
#include<string.h>
void nhap(int a[] ,int &n ){
	printf("nhap vao so phan tu mang: \n"); scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("[%d]",i);
		scanf("%d",&a[i]);
	}
}
void in(int a[], int n){
	for(int i=0;i<n;i++)
		printf("%d",a[i]);
}
int kt(int a[] ,int n){
	int d=0 , c=n-1;
	while(d<c){
		if(a[d]==a[c])  return 1;
		d++ ; c-- ;
	}
	return 0;
}
int main(){
	int a[100]  , n ;
	nhap(a,n);
	if(kt(a,n)) printf(" mang doi xung");
	else printf(" day khong phai la mang doi xung");
}
