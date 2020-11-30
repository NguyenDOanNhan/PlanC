#include<iostream>
#include<fstream>
	using namespace std;
int main(){
	ofstream File("nhan.txt");
	File<<" nhan nen hoc cho  nghiem tuc\n";
	File<<" nhan ra ngay tho";
	
	File.close();
	return 0;


}

