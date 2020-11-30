#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void chuanhoa(char s[]){
	strlwr(s);
	char s1[100]=" ";
	char*p=strtok(s," ");
	while(p!=NULL){
		p[0]=toupper(p[0]);
		strcat(s1,p);
		strcat(s1," ");
		p=strtok(NULL," ");
	}
	puts(s);
}
int main(){
	char s[100]  ;
	gets(s);
	chuanhoa(s);
}
