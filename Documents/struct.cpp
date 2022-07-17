// You are using GCC
#include<stdio.h>
struct DEPT 
{
    char name[100];
    int empid;
    int years_of_ex;
    int basicsal;
    int sal;
    struct ha
    {
    	int ja=10;
    	
	}e2;
    
}e1[78];
int main()
{
    int i,j,a,b,c,d,e,f,n;
    printf("%d",e2[0].ja);
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %d",&e1[i].name,&e1[i].empid,&e1[i].years_of_ex,&e1[i].basicsal);
    }
    for(i=0;i<n;i++){
    e1[i].sal=0;
    if(e1[i].years_of_ex>10)
    {
        e1[i].sal=e1[i].basicsal+(e1[i].basicsal/10);
    }
    else if(e1[i].years_of_ex>=5 && e1[i].years_of_ex<=9)
    {
        e1[i].sal=e1[i].basicsal+(e1[i].basicsal/5);
    }
    else
    {
        e1[i].sal=e1[i].basicsal+(e1[i].basicsal/2);
    }
    }
    for(i=0;i<n;i++)
    {
        printf("Employee Name :%s\nEmployee Id: %d\nyears of experience : %d\nsalary : %d\n\n",e1[i].name,e1[i].empid,e1[i].years_of_ex,e1[i].sal);
        
    }

}
