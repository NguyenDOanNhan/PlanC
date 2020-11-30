#include <iostream> 
#include <fstream> 
#include <iostream> 
using namespace std;

int main()
{
    ofstream FileDemo ("File Demo.txt");
    FileDemo<<"Day la file demo su dung cach doc va ghi file su dung fstream";
    FileDemo.close();
    return 0;
}

