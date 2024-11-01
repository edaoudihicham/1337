/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim___.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:53:51 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/01 14:05:27 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	isfound(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	finish;
	size_t	len;

	i = 0;
	while (isfound(s1[i], set))
		i++;
	start = i;
	while (s1[i])
		i++;
	i--;
	while (isfound(s1[i], set))
		i--;
	finish = i;
	len = finish - start + 1;
	str = (char *)malloc((len + 1) * (sizeof(char)));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1 + start, len);
	str[len] = '\0';
	return (str);
}

// int	main(void)
// {
// 	printf("%s", ft_strtrim("    abcdhsgdh  ghfgcdab    ", "   "));
// 	return (0);
// }
