/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:52:23 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/07 10:13:14 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
// #include <stdio.h>

// int main()
// {
// 	t_list *node1 = ft_lstnew("First node");
// 	t_list *node2 = ft_lstnew("Second node");
// 	t_list *node3 = ft_lstnew("Third node");

// 	t_list *head = node1; // Start the list with node1
// 	ft_lstadd_back(&head, node2); // Adds node2 to the end
// 	ft_lstadd_back(&head, node3); // Adds node3 to the end

// 	t_list *current = head;
//     while (current != NULL)
//     {
//         printf("Node content: %s\n", (char *)current->content);
//         current = current->next;
//     }

//     return (0);
// Now, head points to node1, node1->next points to node2,
// and node2->next points to node3
// }
