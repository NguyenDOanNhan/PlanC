#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void chuan(char s[]){
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
	char s[100] , s1[100] ;
	gets(s);
	chuan(s);
}
