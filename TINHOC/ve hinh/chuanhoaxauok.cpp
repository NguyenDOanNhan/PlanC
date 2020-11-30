#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main(){
	char s[100];
	gets(s);
	char *p=strtok(s," ");
	while(p!=NULL){
		p[0]=toupper(p[0]);
		for(int i=1;i<strlen(p);i++)
			p[i]=tolower(p[i]);
		printf(" %s",p);
		p=strtok(NULL," ");
	}
}
