#include<iostream>
#include<string.h>
				  using namespace std;
class hinhchunhat{
	public: 
		int chieudai;
		int chieurong;
	public:
		hinhchunhat(){
			chieudai=1;
			chieurong=2;
		}
	int getchieudai(){
		return this -> chieudai;
	}
	void setchieudai(int chieudai){
		this->chieudai=chieudai;
	}
	int getchieurong(){
		return this->chieurong;
	}
	void setchieurong(int chieurong){
		this->chieurong=chieurong;
	}
	int chuvi(){
		return (chieudai+chieurong)*2;
	}
	int dientich(){
		return chieudai*chieurong;
	}
};
int main(){
	hinhchunhat hcn1;
	cout<<hcn1.dientich();
	
}

