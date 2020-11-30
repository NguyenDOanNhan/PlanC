#include<stdio.h>
#include<string.h>
void nhap(int a[] ,int &n){
	scanf("%d",&n);
	for(int i=0; i<n;i++){
		printf("[%d]",i);
		scanf("%d",&a[i]);
	}
}
void in(int a[] ,int n){
	for(int i=0;i<n;i++)
		printf("%4d",a[i]);
}
void solanxuathien(int a[] ,int n){
	int max=a[0];
	for(int i=0;i<n;i++)
		if(a[i]>max) max=a[i];
	int b[10000]={0};
	for(int i=0;i<n;i++)
		b[a[i]]++;
	for(int i=0;i<=max;i++)
		if(b[i]!=0) 
		printf("%d xuat hien %d\n",i ,b[i]);
}
int main(){
	int a[10] ,n ;
	nhap(a,n);
	in(a,n);
	printf("\n");
	solanxuathien(a,n);
}
