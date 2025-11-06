#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *prev;
	struct node *next;
} NODE;
NODE *head=NULL;
NODE *create();
void insertAtBegin();
void insertAtEnd();
void insertAtAnywhere();
void deleteAtBegin();
void deleteAtEnd();
void deleteAtAnywhere();
void traverse();
void reverse(NODE*);
int size=0;
NODE *create()
{
	NODE* temp=(NODE*)malloc(sizeof(NODE));
	printf("\nEnter data:");
	scanf("%d",&temp->data);
	temp->prev=NULL;
	temp->next=NULL;
	size++;
	return temp;
}	
void insertAtBegin()
{
	NODE *temp=create(),*t;
	if(head==NULL)
	{
		head=temp;
		head->prev=head->next=head;
	}
	else
	{
		t=head;
		while(t->next!=head)
		t=t->next;
		temp->prev=t;
		temp->next=head;
		t->next=temp;
		head->prev=temp;
		head=temp;	
	}
}
void insertAtEnd()
{
	NODE *new=create(),*t;
	if(head==NULL)
	{
		head=new;
		head->prev=head->next=head;
	}
	else
	{
		t=head;
		while(t->next!=head)
		t=t->next;
		t->next=new;
		new->prev=t;
		new->next=head;
		head->prev=new;
	}
}
void insertAtAnywhere()
{
	int p,loc=0;
	printf("Enter position to insert:");
	scanf("%d",&p);
	if(head==NULL)
    printf("No Such postion\n");
	else if(p==1)
	insertAtBegin();
	else if(p==size+1)
	insertAtEnd();
	else if(p>size)
	printf("No Such postion\n");
	else
	{
		NODE *new,*t,*pr;
		new=create();
		t=pr=head;
		while(t->next!=head)
		{
			loc++;
			if(loc==p)
			break;
			pr=t;
			t=t->next;
		}
		new->prev=t->prev;
		new->next=t;
		t->prev=new;
		pr->next=new;
	}
}
void deleteAtBegin()
{
	NODE *temp;
	if(head==NULL)
	{
		printf("List is Empty!!!\n");
	}
	else if(size==1)
	{
		temp=head;
		head=NULL;
		size--;
		printf("%d is removed\n",temp->data);
		free(temp);
	}
	else
	{
		temp=head;
		head=head->next;
		temp->prev->next=head;
		head->prev=temp->prev;
		size--;
		printf("%d is removed\n",temp->data);
		free(temp);
	}
}
void deleteAtEnd()
{
	NODE *temp=head;
	if(head==NULL)
	printf("List is empty!!!\n");
	else if(size==1)
	{
		temp=head;
		head=NULL;
		size--;
		printf("%d is removed\n",temp->data);
		free(temp);
	}
	else
	{
		while(temp->next!=head)
		temp=temp->next;
		temp->prev->next=head;
		head->prev=temp->prev;
		size--;
		printf("%d is removed\n",temp->data);
		free(temp);
	}
}
void deleteAtAnywhere()
{
	NODE *temp,*t;
	int p,loc=0;
	if(head==NULL)
	printf("List is Empty!!!\n");
	else
	{
		printf("\nEnter the position to insert:");
		scanf("%d",&p);
		if(p==1)
		deleteAtBegin();
		else if(p==size)
		deleteAtEnd();
		else if(p>size)
		printf("No Such postion.\n");
		else
		{
			temp=t=head;
			while(temp->next!=head)
			{
				loc++;
				if(loc==p)
				break;
				t=temp;
				temp=temp->next;
			}
			temp->next->prev=t;
			t->next=temp->next;
			size--;
			printf("%d is removed\n",temp->data);
			free(temp);
		}
	}
}
void reverse(NODE *temp)
{
	if(head==NULL)
	printf("List is Empty!!!\n");
	else if(temp==NULL)
	return;
	else
	{
		reverse(temp->next);
		printf("-->%d",temp->data);
	}
}
void traverse()
{
	if(head==NULL)
	printf("List is Empty!!!\n");
	else
	{
		NODE *temp=head;
		do
		{
			printf("-->%d",temp->data);
			temp=temp->next;
		}while(temp!=head);
		printf("\n");
	}
}

int main()
{
	int ch;
	do
	{
		printf("1.Insert at beginning.\n");
		printf("2.Insert At Ending.\n");
		printf("3.Insert At Any where.\n");
		printf("4.Deletion at beginning.\n");
		printf("5.Deletion at ending.\n");
		printf("6.Deletion At Anywhere.\n");
		printf("7.Traverse.\n");
		printf("8.Reverse.\n");
		printf("9.Count.\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		//printf("number of elements are %d\n",size);
		switch(ch)
		{
			case 1:insertAtBegin();
				   break;
			case 2:insertAtEnd();
				   break;
			case 3:insertAtAnywhere();
				   break;
			case 4:deleteAtBegin();
				   break;
			case 5:deleteAtEnd();
				   break;
			case 6:deleteAtAnywhere();
				   break;
			case 7:traverse();
				   break;
			case 8:reverse(head);
				   printf("\n");
				   break;
			case 9:printf("Number of elements are %d\n",size);
				   break;
			default:exit(0);
		}
	}while(1);
	return 0;
}
