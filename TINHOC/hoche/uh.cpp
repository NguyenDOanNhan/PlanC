#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double t, pi , c;
	cout<<" moi ban nhap vao sai so C: "; cin>>c;
	pi=0; t=1;
	int i=0;
	while(t>c){
		t=1.0/(2*i+1) ;
		if(i%2==0) pi=pi+t;
		else pi=pi-t;
		i++;
	}
	cout<<" so pi cua ban la : "<<4*pi;
}

