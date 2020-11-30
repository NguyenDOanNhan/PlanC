#include<iostream>
    using namespace std;
void nhap(int a[][100] , int &n){
    cout<<" nhap vao co ma tran vuong cap n:\t"; cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]=\t";
            cin>>a[i][j];
        }
    }
}
void in(int a[][100] , int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        
        cout<<a[i][j]<<"    ";
        cout<<"\n";
    }
}
void tonghang(int a[][100] ,int n , int &t1){
    int max1=0 , s;
    for(int i=1;i<=n;i++){
        s=0;
        for(int j=1;j<=n;j++)
        {
            s+=a[i][j];
        }
        if(max1<s) {
            max1=s;
            t1=i;
        }
    }
    cout<<"\nmax hang: "<<max1<<"\tvitri"<<t1;
}
void tongcot(int a[][100] ,int n , int &t2){
    int max2=0 , s;
    for(int j=1;j<=n;j++){
        s=0;
        for(int i=1;i<=n;i++)
        {
            s+=a[i][j];
        }
        if(max2<s) {
            max2=s;
            t2=j;
        }
    }
    cout<<"\nmax cot : "<<max2<<"\tvitri"<<t2;
}
void tongcheo(int a[][100] ,int n ){
    int s1=0 , s2=0 ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            if(i==j){
            s1+=a[i][j];
            }
            else if(i+j==n+1)
            {
            s2+=a[i][j];
            }
    }
    cout<<"\nvoi cheo chinh vi tri =1  :  cheo phu la vi tri =-1";
    if(s1>s2) cout<<"\ncheo chinh:"<<s1<<"  vi tri : 1";
    else if(s1<s2) cout<<"\ncheo phu :"<<s2<<"  vitri : -1";
    else cout<<"\nmax cheo :"<<s1<<"  vitri: 1 va -1"; 
}
void chuyenvi(int a[][100] ,int n){
    int b[100][100] ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        b[i][j]=a[j][i];
    }
    in(b,n);
}
int main(){
    int a[100][100] , n ,t1 , t2;
    nhap(a,n);
    cout<<"\nma tran ban vua nhap:\n";in(a,n);
    cout<<"\nma tran chuyen vi cua ban la:\n";chuyenvi(a,n);
    tonghang(a,n,t1);
    tongcot(a,n,t2);
    tongcheo(a,n);
}
