#include<iostream>
#include<math.h>
	using namespace std;
int kt(long long  a , long long  c ,long long b){
	if(a*a+c*c==b*b) return 1;
	return 0;
}
int main(){
	long long  n , dem=0;
	cin>>n;
	for(long long  a=1;a<=n;a++){
		for(long long c=1;c<=n;c++)
			for(long long b=1;b<=n;b++)
				if(kt(a,c,b)==1&&c<b&&a<c){
					dem=dem+1;
				}
		
	}
	cout<<dem;
}
