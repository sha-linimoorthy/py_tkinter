#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char c;
    fp =fopen("input.txt","w");
    fprintf(fp,"Coding challenges are tests sent to potential employees by a company typically to serve as a zero or first round interview to get initial technical/coding signal on candidates. They are most often given to new graduates or interns, but anyone may be subject to a coding challenge");
    fclose(fp);
    // You are using GCC
char str[1234];
fp= fopen("input.txt","a+");
fflush(stdin);
fgets(str,10000, stdin);
fputs(str,fp);
///canf("%[^\n]s",str);
///fprintf(fp,str);
fclose(fp);
// You are using GCC
fp= fopen("input.txt","a+");
fflush(stdin);
fgets(str,10000, stdin);
fputs(str,fp);
///canf("%[^\n]s",str);
///fprintf(fp,str);
fclose(fp);
}
