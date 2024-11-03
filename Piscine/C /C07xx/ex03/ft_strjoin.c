/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:14:40 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/07/15 16:18:41 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_allocate(int size, char **strs, char *sep)
{
	int		i;
	int		slen;
	char	*res;

	i = 0;
	slen = ft_strlen(sep) * (size - 1);
	if (size == 0)
	{
		res = malloc(1);
		*res = '\0';
		return (res);
	}
	while (i < size)
		slen += ft_strlen(strs[i++]);
	res = malloc(slen + 1);
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	int		k;
	char	*str;
	int		i;

	str = ft_allocate(size, strs, sep);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			str[k++] = sep[j++];
		i++;
	}
	str[k] = '\0';
	return (str);
}
/*
int	main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	separator = " /";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}
*/
