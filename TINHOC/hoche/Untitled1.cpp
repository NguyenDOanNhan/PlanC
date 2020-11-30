#include<iostream>
#include<string.h>
#include<ctype.h>
#include<algorithm>
using namespace std;
int main(){
	string s;
	int t,s1=0,s2=0;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='.'){
			t=i;
		}
	}
	for(int i=0;i<s.size();i++){
		if(i<t){
			s1=s1*10+(s[i]-'0');
		}
		if(i>t){
			s2=s2*10+(s[i]-'0');
		}
	}
	cout<<"phan nguyen la : "<<s1<<endl;
	cout<<"phan thap phan la: "<<s2;
}

