#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};

void InsertInLinkedList(struct node **head,int data,int position)
{
	int k=1;
	struct node *p,*q,*newnode;
	newnode=(node *)malloc(sizeof(struct node));

	if(!newode)
	{
 		printf("Memory Error");
 		return;
	}

	newnode->data=data;
	p=*head;
	if(position==1)
	{
		newnode->next=p;
		*head=newnode;
	}
	else
	{
		while((p!=NULL)&&(k<position))
		{
			k++;
			q=p;
			p=p->next;
		}
	q->next=newnode;
	newnode->next=p;
	}
}

void DeleteNodeLinkedList(struct node **head,int position)
{
	int k=1;
	
	struct node *p,*q;
	if(*head==NULL)
	{
		printf("List Empty");
		return;
	}
	
	p=*head;
	if(position==1)
	{
	        *head=*head->next
		free(p);
		return;
	}
        
        else
	{
		while((p != NULL)&&(k<position))
		{
			k++;
			q=p;
			p=p->next;
		}
		
		if(p==NULL)
		{
			printf("position Does not exist");
		}
		else
		{
                        q->next=p->next;
			free(p);
		}
	}
} 

int main()
{
int i,v,n,d;
struct node *head=NULL;
printf("how many nos do you want to enter and at which position? \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	 scanf("%d",&v)
	 InsertInLinkedList(&head,v,p);
}
printf("enter the position of the element which is to be deleted\n");
scanf("%d",&d);
DeleteNodeLinkedList(&head,d);
return 0;
}
