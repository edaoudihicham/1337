/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:57:19 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/02 20:58:53 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <unistd.h>
static	size_t countwords(const char *s, char c)
{
	size_t i;
	size_t count;
	
	i = 0;
	count = 0;
	while(s[i])
	{
		while (s[i] == c)
			i++;
		if(s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static	void *free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int i;
	int k;
	int start;
	int size;
	char **arr;
	
	arr = malloc((countwords(s,c) + 1) * sizeof(char *));
	if(arr == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while(s[i] != '\0')
	{
		size = 0;
		while(s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while(s[i++] != c) 
			size++;
		arr[k] = ft_substr(s, start, size);
		if (arr[k] == NULL)
			return (free_arr(arr));
		k++;
		i++;
	}
	arr[k] = NULL;
	return (arr);
}

int main()
{
	char	**str;
	int		i;
	char *s = "        I just fixed sigmentation  fault                 ";
	str = ft_split(s, ' ');
	printf("%zu\n", countwords(s,' '));
	i = 0;
	while (str[i] != NULL)
	{
		write(1, str[i], ft_strlen(str[i]));
		write(1, "$\n", 2);
		i++;
	}
	return 0;
}