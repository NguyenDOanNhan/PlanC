#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	string s;
	cin>>s;
	int s1=0 , s2=0 ;
	int t=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='.'){
			t=i;
		}
	}
	for(int i=0;i<s.size();i++){
		if(t>i) 
		s1=s1*10+(s[i]-'0');
		if(t<i)
		s2=s2*10+(s[i]-'0');
	}
	cout<<"phan nguyen la:"<<s1<<endl;
	cout<<"phan thap phan la:"<<s2;
}

