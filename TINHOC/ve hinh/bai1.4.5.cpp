#include<stdio.h>
#include<string.h>
FILE *f1=fopen("111.inp","r");
FILE *f2=fopen("111.out","w");
struct SV {
		char ten[100];
		char ngaysinh[20];
		float d1,d2,d3,t;
		int stt;
}ds[10];
void nhap(SV ds[],int &n){
	fscanf(f1,"%d",&n);
	char t[100];
	for(int i=0;i<n;i++){
		fgets(t,30,f1);
		fgets(ds[i].ten,30,f1);
		ds[i].ten[strlen(ds[i].ten)-1]='\0';
		fgets(ds[i].ngaysinh,30,f1);
		ds[i].ngaysinh[strlen(ds[i].ngaysinh)-1]='\0';
		fscanf(f1,"%f%f%f",&ds[i].d1,&ds[i].d2,&ds[i].d3);
	}
}
void tongdiem(SV ds[],int n){
	float t1[10];
	for(int i=0;i<n;i++){
        ds[i].t=ds[i].d1+ds[i].d2+ds[i].d3;
        ds[i].stt=i+1;
		t1[i]=ds[i].t;
	}
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++){
            if(t1[i]<=t1[j]){
                SV c=ds[i];
                ds[i]=ds[j];
                ds[j]=c;
            }
		}
	for(int i=0;i<n;i++)
		fprintf(f2,"%d %s\t%s\t\%3.1f\n",ds[i].stt,ds[i].ten,ds[i].ngaysinh,ds[i].t);
}
main(){
	int n;
	nhap(ds,n);
	tongdiem(ds,n);
	fclose(f1);
	fclose(f2);
}
