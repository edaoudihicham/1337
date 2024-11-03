/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:12:12 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/07/03 11:12:50 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}


int main()
{
    char s1[] = "test";
    char s2[] = "te";
    printf("%d\n",ft_strcmp(s1,s2) );
    printf("%d",strcmp(s1,s2) );
}
