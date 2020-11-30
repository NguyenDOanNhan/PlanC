#include<iostream>
	using namespace std;
#include<string.h>
#define MAXLEN 10
#define MAXNUM 5
int main()
{
	char *cname;
	char *cptr[MAXNUM]; //mang con tro tro den chuoi
	char *ctemp;
	int i, ij, dem = 0;
	//nhap danh sach ten
	while (dem < MAXNUM)
	{
	printf("Nhap vao ten nguoi thu %d: ", dem+ 1);
	gets(cname);
	strcpy(cptr[dem++],cname); //con tro den ten
	}
//sap xep danh sach theo thu tu tang dan
	for (i = 0; i < dem; i ++)
	for (ij = i + 1; ij < dem; ij ++)
		if (strcmp(cptr[i], cptr[ij]) > 0)
		{
			ctemp = cptr[i];
			cptr[i] = cptr[ij];
			cptr[ij] = ctemp;
		}
//In danh sach da sap xep
		printf("Danh sach sau khi sap xep:\n");
	for (i = 0; i < dem; i ++)
		printf("Ten nguoi thu %d : %s\n", i + 1, cptr[i]);
	
}

