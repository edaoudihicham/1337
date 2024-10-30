/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:52:19 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/10/30 19:34:47 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *temp;
	
	temp = (unsigned char *)s;
	size_t i;

	i = 0;
	while(i < n)
	{
		if (temp[i] == (unsigned char)c)
		{
			return (&temp[i]);
		}
		i++;
	}
	return (0);
}
