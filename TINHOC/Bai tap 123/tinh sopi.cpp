#include <stdio.h>
main(){
	int i=0;
	float c,t,pi;
	 
	printf("nhap c:");
	scanf("%f",&c);
	t=1;
	pi=0;
	
	while (t>c){
		t=1.0/(2*i+1);
		if (i%2==0) pi=pi+t;
		else pi=pi-t;
		i++;	
	}
	printf("tong la %f",4*pi);
}
