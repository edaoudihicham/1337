/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:55:18 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/10/31 16:40:00 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		len;

	len = 0;
	while (s1[len])
	{
		len++;
	}
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	str[len] = s1[len];
	len = 0;
	while (s1[len])
	{
		str[len] = s1[len];
		len++;
	}
	return (str);
}
