#include<iostream>
#include<fstream>
	using namespace std;
ofstream sochan("sochan.txt");
int main(){
	sochan<<" so chan tu 1->100";
	for(int i=0;i<=100;i++){
		if(i%2==0)
		sochan<<i;
		sochan<<"\n";
	}
	sochan.close();
}

