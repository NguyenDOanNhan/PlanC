#include<iostream>
    using namespace std;
#include<algorithm>
#include<string.h>
#define MAXNUM 5
#define MAXLEN 10
using namespace std;
int main(){
    char ten[MAXNUM][MAXLEN];
    char *p[MAXNUM];
    char *vt;
    int i , j , dem =0;
    //nhap vao danh sach sinh vien //
    while(dem<MAXNUM)
    {
        cout<<"nhap ten nguoi thu "<<dem+1;
        gets(ten[dem]);
        p[dem++]=ten[dem]; // con tro toi ten;

    }
    // sap xep theo thu tu tang dan//
    for(i=0;i<dem-1;i++)
    {
        for(j=i+1;j<dem;j++)
            if(strcmp(p[i],p[j])>0)
            {
                vt=p[i];
                p[i]=p[j];
                p[j]=vt;
            }
    }
    //in danh sach//
    cout<<"\nDanh sach sau khi sap xep la : ";

    for(i=0;i<dem;i++){
        cout<<"\nTen nguoi thu "<<i+1<<" la "<<p[i];
    }
}

