/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:57:19 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/02 16:16:34 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
static int countwords(const char *s, char c)
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
	int count = countwords(*s, c);
	int length;

	i = 0;
	ptr = (char **)malloc( count * sizeof(char *)); 
	if (ptr == NULL)
		return (NULL);
	
	while(i < count)
	{
		ptr[i] = (char *) malloc((length + 1)* sizeof(char));
		if (ptr[i] == NULL)
		{
			while (i > 0)
         	   free(ptr[--i]);
        	free(ptr);
        	return (NULL);
		}
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
