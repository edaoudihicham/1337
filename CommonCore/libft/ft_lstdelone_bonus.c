/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:21:28 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/07 10:11:30 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void free_content(void *content)
// {
//     free(content);
// }
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
// #include <stdio.h>
// int main()
// {
// 	t_list *node = ft_lstnew(malloc(sizeof(int)));
// 	*(int *)(node->content) = 42;

// 	ft_lstdelone(node, free_content);
// }
