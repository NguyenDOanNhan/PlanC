#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n , kt=0;
	cout<<" nhap vao so tu nhien n: "; cin>>n;
	if(n<2) cout<<" day khong phai la so nguyen to";
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
				{
					kt=1;
					break;
				}
	}
	if(kt==0) cout<<" day la so nguyen to";
	else
	cout<<" day khong phai la so nguyen to";
}
