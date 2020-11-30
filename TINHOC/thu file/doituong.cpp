#include<iostream>
#include<string.h>
				  using namespace std;
class hinhchunhat{
	public:
		int chieudai;
		int chieurong;
	public:
		int chuvi(){
			return (chieudai+chieurong)*2;
		}
};
int main(){
	int n;
	cin>>n;
	hinhchunhat hcn1;
	hcn1.chieudai=n;
	hcn1.chieurong=n+2;
	cout<<"doi tuong hing chu nhat : "<<hcn1.chuvi();
}

