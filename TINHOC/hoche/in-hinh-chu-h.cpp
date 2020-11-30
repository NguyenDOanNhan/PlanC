#include <stdio.h>
#define max 5
int h[max][max]={{1,0,0,0,1},
				 {1,0,0,0,1},
				 {1,1,1,1,1},
				 {1,0,0,0,1},
				 {1,0,0,0,1},};
main(){
	for(int i=0;i<max;i++)
	{
		for(int j=0;j<max;j++)
		if(h[i][j])
			printf(" ! ");
		else
			printf("   ");
	printf("\n");			
	}
}				 
