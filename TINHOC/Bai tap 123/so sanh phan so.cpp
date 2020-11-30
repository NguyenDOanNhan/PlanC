#include<algorithm>
using namespace std;
struct PhanSo
{
   long long ts;
    long long ms;    
};
PhanSo a[100005];
long long n;
bool SoSanh(const PhanSo &x, const PhanSo &y)
{
    return (double)x.ts/x.ms < (double)y.ts/y.ms;
}
int main()
{	
    sort(a, a+n, SoSanh); // s?p x?p m?ng phân s? t? ph?n t? 0 d?n ph?n t? n-1
    sort(a+1, a+1+n, SoSanh); // s?p x?p m?ng phân s? t? ph?n t? 1 d?n ph?n t? n
}
