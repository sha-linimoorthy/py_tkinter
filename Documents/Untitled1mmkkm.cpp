// You are using GCC
#include <stdio.h>
 
int count1s( int num)
{
    int i;
    int count=0;
    
    int totalBits=sizeof(num)*8;
    
 
    for(i=0;i<totalBits;i++)
    {
        if( num & 1 )
        
            count++;
        num = num >>1;
    }
    
    return count;
}

int main()
{
    
    int data;
    scanf("%d",&data);
    printf("Total number of 1's are : %d",count1s(data));
 
    return 0;
}
