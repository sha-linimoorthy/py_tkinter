/*#include<stdio.h>
 
int main() {
   int i, j, n, u=0, k=0, f=0,l,g;
   scanf("%d", &n);
   int a[n][n];
   for (i = 0; i < n; i++)
   {
   
      for (j = 0; j < n; j++) {
         scanf("%d", &a[i][j]);
         
	  }
	}
	scanf("%d",&l);
	for (i=0;i<n-1; i++){
      for (j=0;j<n-1;j++)
      	{
      		k=k+a[i][j];
      		if(k==l)
      		{
      			g=f+1;
			  }
      	}
      }
    for (i=0;i<n-1; i++){
      for (j=1;j<n;j++)
      	{	k=0;
      		k=k+a[i][j];
      		if(k==l)
      		{
      			g=f+1;
			  }
      	}
      }
    	for (i=1;i<n; i++){
      for (j=0;j<n-1;j++)
      	{	k=0;
      		k=k+a[i][j];
      		if(k==l)
      		{
      			g=f+1;
			  }
      	}
      }
      	for (i=1;i<n; i++){
      for (j=1;j<n;j++)
      	{	k=0;
      		k=k+a[i][j];
      		if(k==l)
      		{
      			g=f+1;
			  }
      	}
      }
	printf("%d",g);
	
}*/
