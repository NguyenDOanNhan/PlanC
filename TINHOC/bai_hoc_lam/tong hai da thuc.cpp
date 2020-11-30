#include<iostream>
	using namespace std;
#include<string.h>
struct dathuc{
	int bac;
	int *heso;
};
void nhapdt(dathuc &p){
	p.bac;
	p.heso;
}
void nhapdathuc(dathuc &p){
	cout<<"Moi ban nhap vao bac cua da thuc:\t"; cin>>p.bac;
	p.heso=new int (p.bac+1);
	for(int i=0;i<p.bac+1;i++){
		cout<<"a["<<i<<"]=";
		cin>>p.heso[i];
	}
}
void in(dathuc p){
	for(int i=p.bac;i>=0;i--){
		cout<<" + "<<p.heso[i]<<"x^ "<<i;
	}
	cout<<endl;
}
void congdathuc(dathuc p1 , dathuc p2){
	dathuc p3;
	if(p1.bac==p2.bac)
	{
		for(int k=p2.bac;k>=0;k--){
			p3.heso[k]=p1.heso[k] + p2.heso[k] ;
			cout<<" + "<<p3.heso[k]<<"x^"<<k;
		}
		cout<<endl;
	}
	else if(p1.bac>p2.bac){
		
		for(int k=p1.bac;k>=0;k--){
			p3.heso[k]=p1.heso[k] + p2.heso[k] ;
			cout<<" + "<<p3.heso[k]<<"x^"<<k;
		}
		cout<<endl;
	}
	else if (p1.bac<p2.bac){
		
		for(int k=p2.bac;k>=0;k--){
			p3.heso[k]=p1.heso[k] + p2.heso[k] ;
			cout<<" + "<<p3.heso[k]<<"x^"<<k;
		}
		cout<<endl;
	}
}
int main(){
	dathuc p1;
	dathuc p2;
	nhapdathuc(p1);
	in(p1);
	nhapdathuc(p2);
	in(p2);
	congdathuc(p1,p2);
}

