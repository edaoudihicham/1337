/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:19:36 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/06 11:51:56 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
// #include <stdio.h>
// int main ()
// {
// 	t_list *new_node = ft_lstnew("Hello, world!");
// if (new_node != NULL)
// {
//     printf("Content: %s\n", (char *)new_node->content);
// }
// return (0);
// }
