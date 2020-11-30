#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#define max 5 
int h[max][max]={{1,0,0,0,1},
		{1,0,9,3,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},};
main(){
	 int i , j ;
	 for(i=0;i< max;i++){
	 	for(j=0;j<max ;j++)
	 	if(h[i][j]==1)
	 	printf("!");
	 	else
	 	printf(" ");
	 	printf("\n");
	 }
	
}

