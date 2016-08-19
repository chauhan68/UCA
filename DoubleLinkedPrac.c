#include<stdio.h>
#include<stdlib.h>

struct node
	{
		int data;
		struct node *next;
		struct node *prev;

	};
struct node *head=NULL;
struct node *trav;
struct node *begin;
struct node *end;
struct node *old;

int main()
	{	
		int n,i=0,text;
		scanf("%d",&n);
		while(i<n)
			{	
				scanf("%d",&text);
				if(i==0)
				{
					old=head;
					head=(struct node *)malloc(sizeof(struct node *));
					head->data=text;
					head->prev=old;
					head->next=old;
					old=head;
					begin=old;
				}
				else
				{
					head=(struct node *)malloc(sizeof(struct node *));
					old->next=head;
					head->data=text;
					head->prev=old;
					old=head;
					end=head;
				}
				i++;
			}
		trav=begin;
		while(trav!=end->next)
			{
				printf("%d ",trav->data);
				trav=trav->next;
			}
			printf("\n");
		trav=end;
		while(trav!=begin->prev)
			{
				printf("%d ",trav->data);
				trav=trav->prev;	
			}
			
		return 0;
	}
