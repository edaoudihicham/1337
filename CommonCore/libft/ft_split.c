/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:57:19 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/01 22:37:12 by hdaoudi          ###   ########.fr       */
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
		if(s[i] == c)
			j++;
	i++;
	}
	return (j);
}


char	**ft_split(char const *s, char c)
{
	char **ptr;
	**ptr = (char **)malloc(sizeof(*s) * countwords(*s, c));
	if (**ptr == NULL)
		return (NULL);
}

int main ()
{
	printf("%d", countwords("hey hey hey", ' '));
	return 0;
}
