#include<iostream>
	using namespace std;
class Cngay
{
	private :
		int ngay , thang , nam ;
	public  :
		friend istream& operator >>(iostream& , Cngay&);
		friend ostream& operator <<(iostream& , Cngay);
	Cngay(void);
	~Cngay(void);
};
int main(){
	Cngay nhan;
	nhan.operator <<();
	nhan.operator >>();
	nhan.~Cngay();

}

