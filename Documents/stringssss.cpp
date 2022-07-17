/*///MENU DRIVEN PROGRAM IN STRINGS
#include<stdio.h>
#include<string.h>
 int len(char a[ ]);
 int main()
 {
 	char a[123];
 	int ans;
 	scanf("%s",a);
 	ans=len(a);
 	printf("%d",ans);
 }
 int len(char b[123])
 {
 	int f=0,i;
 	for(i=0;b[i]!='\0';i++)
 	{
 		f++;
 		
	 }
	 b[i]='\0';
	 return f;
 }
 **/
 #include<stdio.h>
 #include<string.h>
void stringlength();
 int main()
 {
 	int ch;
 	while(1)
 	fputs("1.string length",stdout);
 	fputs("2.string length",stdout);
 	fputs("3.string length",stdout);
 	printf("Exit",stdout);
 	fputs("Enter the option",stdout);
 	scanf("%d",&ch);

 }
 switch(ch)
 {
 	case 1:
 		stringlength();
 		break;
 	case 2:
 		stringcopy();
 		break;
 	case 3:
 		string(concatenation());
 		break;
 	case:
 		exit(0);
 		
 }
