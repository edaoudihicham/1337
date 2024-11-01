/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:57:19 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/01 20:17:16 by hdaoudi          ###   ########.fr       */
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
// char	**ft_split(char const *s, char c)
// {
// }

int main ()
{
	printf("%d", countwords("hey hey hey", ' '));
	return 0;
}
