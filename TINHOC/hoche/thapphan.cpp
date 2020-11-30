#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s[100];
	char s1=0 , s2=0 ;
	int t;
	cin>>s;
	for(int i=0;i<=s.size(s);i++)
	{
		if(s[i]=='.')
		t=i;
	}
	for(int i=0;i<=s.size(s);i++){
		if(t>i)
			s1=s1*10+(s[i]-'0');
		else if(t<i)
		s2=s2*10+(s[i]-'0');
	}
	cout<<s1;
	cout<<s2;
}

