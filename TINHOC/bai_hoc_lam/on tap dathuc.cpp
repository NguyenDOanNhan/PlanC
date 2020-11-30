#include<iostream>
#include<string.h>
	using namespace std;
struct dathuc{
	int bac ;
	int *heso;
	
};
void nhapdathuc(dathuc &p)
	{
		p.bac;
		p.heso;
	}
void nhapdt(dathuc &p)
	{
		cout<<" nhap vao bac cua da thuc:\t";;
		cin>>p.bac;
		
		p.heso=new int [p.bac+1];
		
		for(int i=0;i<p.bac+1;i++){
			cout<<"a["<<i<<"]";
			cin>>p.heso[i];
		}
	}
void hienthi(dathuc p)	
	{
		for(int i=p.bac;i>=0;i++)
			{
				cout<<p.heso[i]<<" x^ "<<i<<" + ";
			}
		cout<<endl;
	}
int main()
	{
		dathuc p;
		nhapdt(p);
		hienthi(p);	
	}

