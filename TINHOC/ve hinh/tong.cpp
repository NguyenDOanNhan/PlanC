#include<conio.h>
#include<stdio.h>
int main()
{
float a[10][10], T=0;
int M, N, i,j, Min;
printf("Ma tran co bao nhieu dong? ");scanf("%d",&M);
printf("Ma tran co bao nhieu cot? ");scanf("%d",&N);
for(i=0;i<M;i++)
for(j=0; j<N; j++)
{
printf("Phan tu o dong %d cot %d: ",i,j);
scanf("%f",&a[i][j]);
}
printf("Ma tran vua nhap: \n");
for(i=0;i<M;i++)
{
for(j=0; j< N; j++)
printf("%.2f ",a[i][j]);
printf("\n");
}
Min=(M>N) ? N: M; /* Tìm giá tr? nh? nh?t c?a M & N*/
for(i=0;i<Min;i++)
T=T+a[i][i];
printf("Tong cac phan tu o duong cheo chinh la: %f",T);
getch();
return 0;
}
