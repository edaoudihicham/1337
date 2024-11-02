/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:57:19 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/02 15:19:04 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
int countwords(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s[i])
	{
		if ()
		i++;
	}
	return (j);
}

// char	**ft_split(char const *s, char c)
// {
// 	char **ptr;

// 	ptr = (char **)malloc(sizeof(*s) * countwords(*s, c)); 
// 	if (ptr == NULL)
// 		return (NULL);
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

int main ()
{
	printf("%d", countwords("hey hey hey", ' '));
	return 0;
}
