/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:22:41 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/08 15:41:41 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// // Function to apply to each element in the list (e.g., multiplying by 2)
// void *multiply_by_two(void *content) {
//     int *new_value = (int *)malloc(sizeof(int));
//     if (new_value == NULL)
//         return (NULL);
//     *new_value = (*(int *)content) * 2;
//     return (new_value);
// }

// // Function to delete a node's content (free the allocated memory)
// void del(void *content) {
//     free(content);
// }

// void print_list(t_list *lst) {
//     while (lst) {
//         printf("%d -> ", *(int *)lst->content);
//         lst = lst->next;
//     }
//     printf("NULL\n");
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*content;
	t_list	*list;
	t_list	*node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	list = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (node == NULL)
		{
			del(content);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}

// int main() {
//     // Create a simple list with integer values
//     int *num1 = (int *)malloc(sizeof(int));
//     int *num2 = (int *)malloc(sizeof(int));
//     int *num3 = (int *)malloc(sizeof(int));
//     *num1 = 1;
//     *num2 = 2;
//     *num3 = 3;

//     t_list *list = ft_lstnew(num1);
//     t_list *node2 = ft_lstnew(num2);
//     t_list *node3 = ft_lstnew(num3);

//     ft_lstadd_back(&list, node2);
//     ft_lstadd_back(&list, node3);

//     printf("Original list: ");
//     print_list(list);

//     // Apply ft_lstmap to multiply each element by 2
//     t_list *new_list = ft_lstmap(list, multiply_by_two, del);

//     printf("Transformed list: ");
//     print_list(new_list);

//     // Clean up memory
//     ft_lstclear(&list, del);
//     ft_lstclear(&new_list, del);

//     return (0);
// }
