#include<stdio.h>
#include<stdlib.h>
#difine Max 100
void nhap(int a[] ,int &n){
	
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf(a,&n);
	}	
}
void in(int a[],int n){
	for(int i=0;i<n;i++)
		printf("%4d",a[i]);
}
int main(){
	int a[1000]    , n ;
	nhap(a,n);
	in(a,n);
}
