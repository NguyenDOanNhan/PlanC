#include<iostream>
#include<fstream>
	using namespace std;
int main(){
	fstream caro("caro.txt");
	int a[30][30] ;
	for(int i=0;i<30;i++){
		for(int j=0;j<30;j++)
		{	a[30][30]={0};
			caro<<a[i][j];
		}
	}
	caro.close();
}

