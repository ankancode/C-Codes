#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
        int node *next;
};

void push(struct node** head_ref, int new_data)
{
	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
        (*head_ref) = new_node;
}

void deleteNode(struct node **head_ref, int key)
{
	struct node* temp = *head_ref, *prev;
	if(temp != NULL && temp->data == key)
	{
		*head_ref = temp->next;
		free(temp);
                return;
        }

	while (temp != NULL && temp->data != key)
	{
		prev = temp;
		temp = temp->next;
	}
        if(temp == NULL)
         return;
    
        prev->next = temp->next;
        free(temp);
}

void printlist(struct node *node)
{
	while(node != NULL)
        {
        	printf("%d",node->data);
                node = node->next;
        }
}

int main()
{
  struct node* head=NULL;
  
  push(&head, 5);
  push(&head, 2);
  push(&head, 7);
  puts("\n Created linked list \n");
  printlist(head);
  deleteNode(&head, 2);
  puts("\n Linked list after deleting 2 \n")
  printlist(head);
  return 0;
}
