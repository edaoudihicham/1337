/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:51:45 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/10/31 20:09:48 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[len]);
	while (len--)
	{
		if (s[len] == (unsigned char)c)
			return ((char *)&s[len]);
	}
	return (NULL);
}
