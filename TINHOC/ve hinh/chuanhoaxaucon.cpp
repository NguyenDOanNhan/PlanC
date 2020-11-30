#include<stdio.h>
#include<ctype.h>
#include<string.h>
FILE*f1=fopen("bai11.inp","r");
FILE*f2=fopen("bai11.out","w");
void chuanhoa(char s[]){
		fgets(s,100,f1);
	char*p=strtok(s," ");
	while(p!=NULL){
		p[0]=toupper(p[0]);
		for(int i=1;i<strlen(s);i++)
			p[i]=tolower(p[i]);
		p=strtok(NULL," ");
	}
		fprintf(f1," %s",&p);
}
int main(){
	char s[100] ;
	chuanhoa(s);
	fclose(f1);
	fclose(f2);
}
