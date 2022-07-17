
#include<stdio.h>
int main()
{
	int r,c,i,j,x,y,n,m,s=0,dir=1,direction=1;
	scanf("%d %d",&r,&c);
	char gnd[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	{
		scanf("%s",&gnd[i][j]);
	}
	}
	scanf("%d%d%d",&x,&y,&n);
	char path[n];
	for(i=0;i<n;i++)
	{
		scanf("%c",&path[i]);
	}
	for(direction=1;direction<5;direction++)
	{
		dir=direction;
		i=x;
		j=y;
		for(m=0;m<n;m++)
		{
			if(dir==1)
			{
				switch(path[m])
				{
					case 'F':
						if(i>0)
						{
							i--;
						}
						else
						{
							s=-1;
							break;
						}
					case 'L': dir=4;break;
					case 'R': dir=2;break;
						
					}
				}
				
			}
		}
	}
