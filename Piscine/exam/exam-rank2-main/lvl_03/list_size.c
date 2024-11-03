/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:46:31 by ouboukou@st       #+#    #+#             */
/*   Updated: 2024/05/27 20:30:32 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list_size.h"

int	ft_list_size(t_list *begin_list)
{
    int i = 0;

    while (begin_list)
    {
        begin_list = begin_list->next;
        i++;
    }
    return i;
}