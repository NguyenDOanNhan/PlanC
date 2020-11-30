#include<stdio.h>
#include<string.h>
#include<ctype.h>
main(){
    char s[100];
    int i;
    gets(s);
    char *p=strtok(s," ");
    while(p!=NULL){
        p[0]=toupper(p[0]);
        for(i=1;i<strlen(p);i++)
            p[i]=tolower(p[i]);
        printf(" %s",p);
        p=strtok(NULL," ");
    }
}
