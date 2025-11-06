#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *create();
void insertatbegin(int);
void insertatend(int);
void insertatanywhere(int);
void deleteatbegin();
void deleteatend();
void deleteatanywhere();
void traverse();
void reverse(NODE*);
int size();
NODE*head=NULL;
NODE*create();
{
	  struct node*temp;
	  temp=(struct node*)malloc(sizeof(struct node));
	  return temp; 
}
void insertatbegin(intn)
{
	   NODE*temp=create();
	   temp->data=n;
	   if(head=temp);
	   head->next=NULL;
}
else
{
	   temp->next=head;
	   head=temp;
}
void insertatend(int n)
{
	   NODE *t=create();
	   temp->data=n;
	   temp->next=NULL;
	   if(head==NULL)
	   {
	   	head=temp;
				}
				else
				{
					t=head;
					while(t->next!=NULL)
					t=t->next;
					t->next=temp;
				}
}
void insertatanyhwhere(int n)
{
	NODE*t,*prev,*temp;
	int p,loc=0;
	printf("enter position to insert:");
	scanf("%d",&p);
	if(head==NULL)
	{
		  printf("No such position:\n");
	}
	else if(p==size()+1)
	insertatend(n);
	else if(p>size())\
	printf("No such position\n");
	else
	{
		temp=create();
		temp->data=n;
		t=prev=head;
		while(t->next!=NULL)
		{
			loc++;
			if(loc==p)
			break;
			prev=t;
			t=t->next;
		}
		prev->next=temp;
		temp->next=t;
	}
}
































