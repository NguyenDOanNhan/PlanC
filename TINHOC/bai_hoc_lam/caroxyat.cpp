#include<iostream>
	using namespace std;
#include<fstream>
void hienthi(int a[][30] , int &n){
	fstream f1;
	f1.open("caro.txt",ios::out);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
		
			f1<<a[i][j]<<"0	";
			f1<<endl;
	}
	f1.close();
	}
int main(){
	int a[30][30] , n;
	hienthi(a,n);
	return 0;
}

