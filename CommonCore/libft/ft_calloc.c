/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:53:46 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/05 18:54:40 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*str;

	if(count > 0 && count > (__SIZE_MAX__/size))
		return (NULL);
	str = (unsigned char *)malloc(count * size);
	if (str == NULL)
	{
		return (NULL);
	}
	ft_bzero(str, count * size);
	return (str);
}
