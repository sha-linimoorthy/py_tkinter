/* COST OF PETROL */
#include<stdio.h>
int main()
{
	float k,x,r,z,b,o;
	int m;
	printf("Enter (k) kilometer driven in beginning, at the end (x), mileage (m), cost of petrol (r) in RS");
	scanf("%f%f%d%f",&k,&x,&m,&r);
	z=(k+x);
	o=z/1.609;
	b=(z/m)*r;
	printf(" Total miles ANAND drove %f \n Total amount spent by ANAND for fuel is RS %f per litre",o,b);
	printf("\n NAME: SHALINI \n ROLL NO: 21ADR046");
	return 0;
}
		
