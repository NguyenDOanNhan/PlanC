#include<stdio.h>
#define max 5
int h[max][max]={{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},
	{1,0,0,0,1},};
int main(){
	int i , j ;
	for(i=0;i<max;i++){
		for(j=0;j<max;j++)
		if(h[i][j]) 	printf("!");
		else
		printf(" ");
		printf("\n");
	}
}
