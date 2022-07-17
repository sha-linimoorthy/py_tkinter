#include<stdio.h>
#include<stdlib.h>
void del();
void insert();
void display();
struct node 
{
	int data;
	struct node * next;
};
struct node * head;
int main()
{
	int i=1,n;
	scanf("%d",&n);
	while(i<=n)
	{
		insert();
		i++;
	}
	del();
}
void insert()
{
	
	struct node * newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("invalid");
	}
	else
	{
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
		}
		else
		{
			struct node *p;
			p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			p->next=newnode;
		}	
	}	
}
void del()
{
		int j;
		struct node *p;
		p=head;
		scanf("%d",&j);
		if(p->data==j)
		{
			head=p->next;
			p->next=NULL;
			free(p);
		}
}
void display()
{
	struct node *p;
	p=head;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
