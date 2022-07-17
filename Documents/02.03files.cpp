#include<stdio.h>
#include<stdlib.h>

  struct student
  {
   int rollno;
   char name[40];
   int m1,m2,m3;


  };

int main()
{
FILE *fp;
char ch='y';
struct student s1;

fp=fopen("test.txt","w");

if (fp==NULL)
{ puts("cannot open file");
}

while(ch=='y')
{
printf("enter roll no,name,m1,m2,m3");
scanf("%d%s%d%d%d",&s1.rollno,s1.name,&s1.m1,&s1.m2,&s1.m3);
fprintf(fp,"%d%s%d%d%d",&s1.rollno,s1.name,&s1.m1,&s1.m2,&s1.m3);
printf("do u want continue 1/0");
fflush(stdin);//buffer
ch=getch();
}



while(fscanf(fp,"%d%s%d%d%d",&s1.rollno,s1.name,&s1.m1,&s1.m2,&s1.m3)!=EOF  )
   printf("%d%s%d%d%d",&s1.rollno,s1.name,&s1.m1,&s1.m2,&s1.m3);


   fclose(fp);

return 0;
}

