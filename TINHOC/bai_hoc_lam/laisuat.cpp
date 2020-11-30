#include<iostream>
#include<string.h>
				  using namespace std;
int main(){
	float n , k  ,m;
	cout<<"moi ban nhap vao so tien hien tai:\t";cin>>n;
	cout<<"\nmoi ban nhap vao so lai suat :\t"; cin>>k;
	cout<<"\nmoi ban nhap so tien mo uoc :\t"; cin>>m;
	float c=0;
	int dem=0;
	while(c<m){
		c=n+n*k;
		dem++;
		n=c;
	}
	cout<<" sau "<<dem<<" nam ban se co so tien mo uoc la "<<m;
}

