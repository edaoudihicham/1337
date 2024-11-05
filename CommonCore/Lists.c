#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int number;
	struct node* next;
}node;

int main()
{
	node *list = NULL;

	node *n = malloc(sizeof(node));
	if (n == NULL)
		return 1;
	n->number = 1; // n points to the node
	n->next = NULL;
	list = n; // Update list to point to n, making list point to the first node in the linked list. = we no longer need n
	
	n = malloc(sizeof(node));
	if (n == NULL)
{
	free(list);
	return 1;
}
	n->number = 2;
	n->next = NULL;
	list->next = n; //now my first node points to the second node we no longer need n

	n = malloc(sizeof(node));
	if (n == NULL)
{
	free(list->next); // we free the last node first
	free(list);// if we free this one first we will lose trace of the next
	return 1;
}
	n-> number = 3;
	n->next = NULL;
	list->next->next = n; // now our second next points at n. We will do this with while loop later

	node *tmp = list;
	while(tmp != NULL)
	{
		printf("%d\n", tmp->number);
		tmp = tmp->next;
	}
	while(list != NULL)
	{
			node* tmp = list->next;
			free(list);
			list = tmp;
	}


}
