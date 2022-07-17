//DETERMINATION OF RIGIDITY MODULUS - TORSIONAL PENDULUM
#include<stdio.h>
int main()
{
	double M,T,L,r,R,t1,t2,T_2,K;
	printf("*******S.NO: 1 *******\nLength of the suspended wire (L)x 10^2 m: \n");
	scanf("%lf",&L);
	printf("Time for 10 oscillations [TRIAL 1] (S): \n");
	scanf("%lf",&t1);
	printf("Time for 10 oscillations [TRIAL 2] (S): \n");
	scanf("%lf",&t2);
	T=(t1+t2)/2;
	T_2=T*T;
	K=L/T_2;
	double T1,L1,t11,t21,T_21,K1;
	printf("*******S.NO: 2 *******\nLength of the suspended wire (L)x 10^2 m: \n");
	scanf("%lf",&L1);
	printf("Time for 10 oscillations [TRIAL 1] (S): \n");
	scanf("%lf",&t11);
	printf("Time for 10 oscillations [TRIAL 2] (S): \n");
	scanf("%lf",&t21);
	T1=(t11+t21)/2;
	T_21=T1*T1;
	K1=L1/T_21;
	double T2,L2,t12,t22,T_22,K2;
	printf("*******S.NO: 3 *******\nLength of the suspended wire (L)x 10^2 m: \n");
	scanf("%lf",&L2);
	printf("Time for 10 oscillations [TRIAL 1] (S): \n");
	scanf("%lf",&t12);
	printf("Time for 10 oscillations [TRIAL 2] (S): \n");
	scanf("%lf",&t22);
	T2=(t12+t22)/2;
	T_22=T2*T2;
	K2=L2/T_22;
	double T3,L3,t13,t23,T_23,K3;
	printf("*******S.NO: 4*******\nLength of the suspended wire (L)x 10^2 m: \n");
	scanf("%lf",&L3);
	printf("Time for 10 oscillations [TRIAL 1] (S): \n");
	scanf("%lf",&t13);
	printf("Time for 10 oscillations [TRIAL 2] (S): \n");
	scanf("%lf",&t23);
	T3=(t13+t23)/2;
	T_23=T3*T3;
	K3=L3/T_23;
	double T4,L4,t14,t24,T_24,K4;
	printf("*******S.NO: 5*******\nLength of the suspended wire (L)x 10^2 m: \n");
	scanf("%lf",&L4);
	printf("Time for 10 oscillations [TRIAL 1] (S): \n");
	scanf("%lf",&t14);
	printf("Time for 10 oscillations [TRIAL 2] (S): \n");
	scanf("%lf",&t24);
	T4=(t14+t24)/2;
	T_24=T4*T4;
	K4=L4/T_24;
	int mean;
	mean=(K4+K3+K2+K1+K)/5;
	printf("MEAN (L/T^2) = %d X 10^2ms^-2\n");
	double PSR,HSC,OR,CR,zo;
	printf("enter PSR and HSC");
	scanf("%lf %lf",&PSR,&HSC);
	OR=PSR+(HSC*0.01);
	printf("ZERO ERROR(if [yes] enter 1 or [no] enter 0)":\n);
	scanf("%d",&zo);
	if(zo==1)
	{
		printf("enter positive or negative error:\n");
		char d[78];
		int y1;
		scanf("%s",&d);
		if(d==positive)
		{
			printf("enter the positive zerro error:");
			scanf("%d",&y1);
			ZO=OR-y1;	
		}
		else
		{
			printf("enter the negative zerro error:");
			scanf("%d",&y1);
			ZO=OR-y1;
		}
	else
	{
		zo=OR;
	}
}
	printf("enter PSR and HSC");
	scanf("%lf %lf",&PSR,&HSC);
	OR1=PSR+(HSC*0.01);
	printf("ZERO ERROR(if [yes] enter 1 or [no] enter 0)":\n);
	scanf("%d",&zo1);
	if(zo1==1)
	{
		printf("enter positive or negative error:\n");
		char d[78];
		int y11;
		scanf("%s",&d);
		if(d==positive)
		{
			printf("enter the positive zerro error:");
			scanf("%d",&y11);
			zo1=OR1-y11;	
		}
		else
		{
			printf("enter the negative zerro error:");
			scanf("%d",&y11);
			zo1=OR1-y11;
		}
	else
	{
		zo1=OR1;
	}
}
		
	printf("enter PSR and HSC");
	scanf("%lf %lf",&PSR,&HSC);
	OR2=PSR+(HSC*0.01);
	printf("ZERO ERROR(if [yes] enter 1 or [no] enter 0)":\n);
	scanf("%d",&zo2);
	if(zo2==1)
	{
		printf("enter positive or negative error:\n");
		char d[78];
		int y22;
		scanf("%s",&d);
		if(d==positive)
		{
			printf("enter the positive zerro error:");
			scanf("%d",&y22);
			zo2=OR2-y22;	
		}
		else
		{
			printf("enter the negative zerro error:");
			scanf("%d",&y22);
			zo2=OR2-y22;
		}
	else
	{
		zo2=OR2;
	}
		double mea;
		mea=(zo2+zo1+zo)/6;
		printf("Mean radius of the wire radius r=d/2= %lf X10^-3m",mea);
	}
	
	
}
	
	
	
}
