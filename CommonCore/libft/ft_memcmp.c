/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:52:34 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/10/24 18:16:19 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
     {
        unsigned char	*str1;
        unsigned char	*str2;
        
        str1 = (unsigned char *)s1;
        str2 = (unsigned char *)s2;

        size_t	i; 
        i = 0;
		
		while (i < n)
		{
			if (str1[i] != str2[i])
			{
				return ((str1[i] - str2[i]));
			}
			i++;
     	}
		return (0);
	 }
