
#include <stdio.h>
#include <conio.h>
#define MAX 5
int H[MAX][MAX] = {{0, 0, 1, 1, 1},
 {1, 0, 0, 0, 0},
 {1, 0, 0, 0, 0},
 {1, 0, 0, 0, 0},
 {0, 0, 1, 1, 1}};
main()
{
 int i , ij;
 for (i = 0; i < MAX; i++)
 {
 	for (ij = 0; ij < MAX; ij++)
 		if (H[i][ij])
 		printf("!");
 	else
 	printf(" ");
 	printf("\n");
 }
 	getch(); 
 }
