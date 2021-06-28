#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct Node
{
	int data;
	struct Node *next;
};

void printList(struct Node *n)
{
	while (n != NULL)
	{
		printf(" %d ", n->data);
		n = n->next;
	}
}

struct Node* push(struct Node *head_ref, int new_data)		// Time complexity of push() is O(1) as it does constant amount of work
{
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
	if (new_node == NULL)
		printf("\nStack Overflow");
	else
	{
		new_node->data = new_data;
		new_node->next = head_ref;
		head_ref = new_node;
	}
	return head_ref;
}

void main()
{
	struct Node *head = NULL;
	head = push(head, 6);
	head = push(head, 5);
	head = push(head, 4);
	head = push(head, 3);
							//	while (1)				  - for checking stack overflow condition
							//	head = push(head, 8);	  - for checking stack overflow condition
	printList(head);

	_getch();
}