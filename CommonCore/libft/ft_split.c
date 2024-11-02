/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:57:19 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/02 15:59:39 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int countwords(const char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(s[i])
	{
		while (s[i] == c)
			i++;
		if(s[i] != c)
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char **ptr;
	int i;
	int count;
	int length;

	i = 0;
	count = 0;
	ptr = (char **)malloc(countwords(*s, c) * sizeof(char *)); 
	if (ptr == NULL)
		return (NULL);
	
	while(i < countwords)
	{
		ptr[i] = (char *) malloc((length + 1)* sizeof(char *));
		if (ptr == NULL)
			return (NULL);
		i++;
	}
}
// loop all the string s
//{ while (*s != '\0')
// skip the set  if s is \0 and s != c
//count = 0;
// clacul the len of the string : count while (s[count] && s[count] != c) count++;
// p[i++] = substr(s, 0, count);
// s = s + count;
//}
// p[i] = 0;
// }



// int main ()
// {
// 	printf("%d", countwords("    hey hey hey", ' '));
// 	return 0;
// }
