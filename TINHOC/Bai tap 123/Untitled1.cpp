//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int r;
		cin>>r>>r;
		string s;
		cin.ignore();
		cin>>s;
		cout<<i<<" ";
		for(int j=0;j<s.length();j++){
			for(int k=1;k<=r;k++){
				cout<<s[j];
			}
		}
		cout<<endl;
	}
	return 0;
}
