// You are using GCC  
#include<stdio.h>
int main()
{
    int n,m,no=0;
    scanf("%d%d",&n,&m);
    n--;
    int m2[n];
    for(int i=0;i<=n;i++)
    scanf("%d",(m2+i));
        
    for(int i=0;i<=n;i++)
    no+=(int) m2[i]/m;
        
    printf("%d",no);
}

/**#include<stdio.h>
int main()
{
	int r,a,b,c,count=0;
	scanf("%d%d%d%d",&r,&a,&b,&c);
	while(r>0)
	{
		if(a==25)
		{
			r=r+20;
		}
		r--;
		count++;
		if(r==0)
		break;
		if(b==120)
		{
			r=r+80;
		}
		r--;
		count++;
		if(r==0)
		break;
		if(c==12)
		{
			r=r+8;
		}
		r--;
		count++;
		if(r==0)
		break;
		a++;
		b++;
		c++;
	}
	    printf("Peter plays %d times before going broke",count);
	    return 0;


	
}**/



/**You are using GC
#include<stdio.h>
int main()
{
    int r,m1,m2,m3,r2,count=0;
    scanf("%d%d%d%d",&r,&m1,&m2,&m3);
    r2=r;
    while(r>0)
	{
	if(m1==25)
	{
	r=r+20;
	}
    r--;
    count++;
    if(r==0)
    break;
    if(m2==120)
    {
    
        if(m1==25 && r>=0){
            m1=0;
            r=r+20;
            r2=r2+20;
        }
        r--;
        m2++;
        if(m2==120 && r>=0)
        {
            m2=0;
            r+=80;
            r2+=80;
        }
        r--;
        m3++;
        if(m1==12 && r>=0){
            m3=0;
            r+=8;
            r2+=8;
        }
    }
    printf("Peter plays %d times before going broke",r2);
}**/