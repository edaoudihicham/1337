#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int				n;
	struct s_list	*next;
}					t_list;

int	main(void)
{
	t_list	*root;
	t_list	*temp;
	t_list *current;

	root = malloc(sizeof(t_list));
	if (root == NULL) return (1);
	root->n = 1;
	root->next = malloc(sizeof(t_list));
	if (root->next == NULL) return 1;
	root->next->n = 2;
	root->next->next = malloc(sizeof(t_list));
	if (root->next->next == NULL) return 1;
	root->next->next->n = 3;

	root->next->next->next = NULL;
	
	// iteration
	current = root;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next; // i++
	}
	// Free allocated memory
	current = root;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	return (0);
}
