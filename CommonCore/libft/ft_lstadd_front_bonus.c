/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:26:28 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/06 14:46:45 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
// #include <stdio.h>
// int	main(void)
// {
// 	int		n;
// 	int		y;
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;

// 	n = 1;
// 	y = 2;
// 	head = NULL;
// 	node1 = ft_lstnew(&n);
// 	node2 = ft_lstnew(&y);
// 	ft_lstadd_front(&head, node1);
// 	ft_lstadd_front(&head, node2);
    
// 	// Print the list
// 	t_list  *current;
//     current = head;
//     while (current != NULL)
//     {
//         printf("Node value: %d\n", *(int *)(current->content));
//         current = current->next;
//     }

// 	return (0);
// }
