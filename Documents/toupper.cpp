#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int main()
{
    FILE *fout,*fp;
    fout =fopen("input.txt","w");
    fprintf(fout,"Features of C language\nIt is a robust language with rich set of built-in functions and operators");
    fclose(fout);
    char ch;
    fp=fopen("input.txt","r");
    ch=fgetc(fp);
    while(ch!=EOF)
    {
    	ch =toupper(ch);
    	printf("%c",ch);
    	ch=fgetc(ch);
	}
	fclose(ch);
	return 0;
}
