#include<stdio.h>
#include<math.h>
int main(){
	int n , t ,i;
	int gt=1;
	scanf("%d",&n);		
	for(i=2;i<=n;i++)
		{
			gt=gt*i;
		}
	printf("%d",gt);
}
