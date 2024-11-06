/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:44:10 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/06 15:27:41 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// #include <stdio.h>
// int main()
// {
// t_list *node1 = ft_lstnew("First node");
// t_list *node2 = ft_lstnew("Second node");
// t_list *node3 = ft_lstnew("Third node");

// node1->next = node2; 
// node2->next = node3; 

// t_list *last = ft_lstlast(node1); 
// printf("Last node content: %s\n", (char *)last->content); 
// }
