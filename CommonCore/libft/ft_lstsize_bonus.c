/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:42:34 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/06 15:04:18 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*current;

	current = lst;
	size = 0;
	while (current != NULL)
	{
		current = current->next;
		size++;
	}
	return (size);
}

// #include <stdio.h>
// int main ()
// {
// t_list *node1 = ft_lstnew("Node 1");
// t_list *node2 = ft_lstnew("Node 2");
// t_list *node3 = ft_lstnew("Node 3");
// t_list *current = node1;
// node1->next = node2; // Link node1 to node2
// node2->next = node3; // Link node2 to node3

// int list_size = ft_lstsize(node1); // Should return 3, as there are 3 nodes in the list
// printf("List size: %d\n", list_size); // Output: List size: 3
// while (current != NULL)
// {
// 	printf("node: %s\n", (char *)current->content); //print all nodes content
// 	current = current->next;
// }

// }
