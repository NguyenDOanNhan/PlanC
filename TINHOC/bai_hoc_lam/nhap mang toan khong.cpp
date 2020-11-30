#include<iostream>
#include<fstream>
	using namespace std;
int main(){
	fstream caro("mang.txt",ios::out);
	int a[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++)
		{
		
			a[i][j]={0};
			caro<<a[i][j];
			caro<<endl;
		}
		
	}
	caro.close();
	return 0;
}

