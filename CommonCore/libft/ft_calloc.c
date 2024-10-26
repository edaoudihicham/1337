/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:53:46 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/10/26 15:18:28 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *str;
	
	str = (unsigned char *)malloc(count * size);
	
	if(str == NULL)
    {
        return (NULL);
    }
	
	int i;
	
	i = 0;
	while(i < (count * size))
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
