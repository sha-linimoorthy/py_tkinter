#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
    
};
void main()
{
    struct node * newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("no");
    }
    else
    {
        scanf("%d",&newnode->data); 
       }
    newnode->next=NULL;
    printf("%d->%p",newnode->data,newnode->next);
}


/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// You are using GCC
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,*arr;
    scanf("%d",&n);
    arr=(int *)calloc (n,sizeof(int));
    if(arr==NULL)
    {
        printf("no");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",(arr+i));
        }
        for(i=0;i<n;i++)
        {
            printf("%d",*(arr+i));
        }
    }
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// You are using GCC
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,*arr;
    scanf("%d",&n);
    arr=(int *)calloc (n,sizeof(int));
    n++;
    arr=(int *)realloc (arr,n*sizeof(int));
    if(arr==NULL)
    {
        printf("no");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",(arr+i));
        }
        for(i=0;i<n;i++)
        {
            printf("%d",*(arr+i));
        }
    }
}


#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void main()
{
    int n,i=0;
    printf("enter");
    scanf("%d",&n);
    while(i<n)
    { 
        insert();
        i++;
    }
    display();
}
void insert()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("No sufficient memory");
    }
    else
    {
        printf("enter data\n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            struct node *temp;
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
}
void display()
{
    struct node *p;
    p=head;
    while(p!=NULL)
    {
        printf("%d->%p\n",p->data,p->next);
        p=p->next;
    }
}


#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
void length();
void addatbegin();
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void main()
{
    int n,i=0;
    printf("enter");
    scanf("%d",&n);
    while(i<n)
    {
        insert();
        i++;
    }
    display();
    length();
    addatbegin();
}
void insert()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("No sufficient memory");
    }
    else
    {
        printf("enter data\n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            struct node *temp;
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
}
void display()
{
    struct node *p;
    p=head;
    while(p!=NULL)
    {
        printf("%d->%p\n",p->data,p->next);
        p=p->next;
    }
}

void length()
{
    int count =0;
    struct node *p;
    p=head;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    printf("%d",count);
}
void addatbegin()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
        head=newnode; 
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
}




 
