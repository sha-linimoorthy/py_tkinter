#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int countocc(FILE *fp,const char *w);
int main()
{
    int wc;
    char istring[1000];
    char w[50];
    FILE *fp;
    fp=fopen("input.txt","w");
    scanf("%[^\n]",istring);
    fprintf(fp,"%s",istring);
    fclose(fp);
    scanf("%s",w);
    fp=fopen("input.txt","r");
    if(fp==NULL)
    {
        printf("unable to open the file");
        exit(EXIT_FAILURE);
    }
    wc=countocc(fp,w);
    printf("%s - %d",w,wc);
    fclose(fp);
    return 0;
    
}
int countocc(FILE *fp, const char *w)
{
    char str[1000];
    char *pos;
    int i,c;
    c=0;
    while((fgets(str,1000,fp))!=NULL)
    {
        i=0;
        while((pos=strstr(str+i,w))!=NULL)
        {
            i=(pos-str)+1;
            c++;
        }
    }
    return c;
    
}
