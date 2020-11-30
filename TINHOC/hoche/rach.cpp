int tach(int n){
	int t, dem=0 , m=0;
	while(n>0){
		t=n%10;
		dem++;
		m=m*10+t;
		if(dem==6)
		cout<<m;
		n=n/10;
	}
}

