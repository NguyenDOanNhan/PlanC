#include<iostream>
#include<string.h>
				  using namespace std;
class hinhchunhat{
	public: 
		int chieudai;
		int chieurong;
	public:
		hinhchunhat(){
			cout<<" doi tuong duoc khoi tao"<<endl;
		}
		~hinhchunhat(){
			cout<<" doi tuong duoc huy bo"<<endl;
		}
};
int main(){
	hinhchunhat hcn1;
	return 0;
}

