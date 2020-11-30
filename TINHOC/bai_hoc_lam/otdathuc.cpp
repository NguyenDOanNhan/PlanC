#include<iostream>
#include<string.h>
	using namespace std;
struct dathuc{
	int bac;
	int *heso;
};
void nhap(dathuc &p){
	p.bac;
	p.heso;
}
void nhapdathuc(dathuc &p)
{
	cout<<"NHap vao bac cua da thuc: ";
	cin>>p.bac;
	p.heso=new int [p.bac+1];
	for(int i=0;i<p.bac+1;i++)
	{
		cout<<"a["<<i<<"]=" ;
		cin>>p.heso[i];
	}
}
void hienthi(dathuc p)
	{
		if(p.bac==1)
		{
			cout<<p.heso[1]<<"x"<<" + ";
			cout<<p.heso[0];
		}
		else
		{
			cout<<p.heso[p.bac]<<"x^"<<p.bac;;	
			for(int i=p.bac-1;i>=2;i--)
			{
				cout<<" + "<<p.heso[i]<<"x^"<<i;
			}
			cout<<" + "<<p.heso[1]<<"x"<<" + ";
			cout<<p.heso[0];
			cout<<endl;
		}
	}
void condathuc(dathuc p1 , dathuc p2)
{
	dathuc p3;
	int n ;
	if(p1.bac==p2.bac){
		for(int k=p1.bac;k>=0;k--){
			n=p3.heso[k]=p1.heso[k]+ p2.heso[k];
		}
			cout<<p3.heso[p1.bac]<<"x^"<<p1.bac;
			
			for(int i=p1.bac-1;i>=2;i--)
			{
				cout<<" + "<<p3.heso[n]<<"x^"<<n;
			}
			cout<<" + "<<p3.heso[1]<<"x"<<" + ";
			cout<<p3.heso[0];
			cout<<endl;
	}
	else if(p1.bac>p2.bac){
		for(int k=p1.bac;k>=0;k--){
			n=p3.heso[k]=p1.heso[k]+ p2.heso[k];
		}
			cout<<p3.heso[p1.bac]<<"x^"<<p1.bac;
			
			for(int i=p1.bac-1;i>=2;i--)
			{
				cout<<" + "<<p3.heso[n]<<"x^"<<n;
			}
			cout<<" + "<<p3.heso[1]<<"x"<<" + ";
			cout<<p3.heso[0];
			cout<<endl;
		
	}
	 else (p1.bac<p2.bac){
		for(int k=p2.bac;k>=0;k--){
			n=p3.heso[k]=p1.heso[k]+ p2.heso[k];
		}
			cout<<p3.heso[p2.bac]<<"x^"<<p2.bac;
			
			for(int i=p2.bac-1;i>=2;i--)
			{
				cout<<" + "<<p3.heso[n]<<"x^"<<n;
			}
			cout<<" + "<<p3.heso[1]<<"x"<<" + ";
			cout<<p3.heso[0];
			cout<<endl;
	}

}
int main(){
	dathuc p1;
	nhapdathuc(p1);
	hienthi(p1);
	dathuc p2;
	nhapdathuc(p2);
	hienthi(p2);
	condathuc(p1,p2);


}
