#include<iostream>
#include<string>
	using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
			string s;
			int k  , st;
				cin>>st>>k;
				cin.ignore();
				cin>>s;
				cout<<i<<" ";
			for(int i=0;i<s.size();i++){
				for(int j=1;j<=k;j++)
					cout<<s[i];
				
			}
			cout<<endl;
	}
}
