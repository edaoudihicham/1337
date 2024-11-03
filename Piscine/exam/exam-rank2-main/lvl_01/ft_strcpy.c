/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:03:34 by ouboukou          #+#    #+#             */
/*   Updated: 2024/04/26 18:41:46 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int	main(void)
{
	char	*str;
	char	src[15] = "hello";
	char	dest[1];
	char	*str1;
	char	src1[15] = "hello";
	char	dest1[1];

	str = ft_strcpy(dest, src);
	printf("ft_strcpy:\t%s\n", str);
	str1 = strcpy(dest1, src1);
	printf("ft_strcpy:\t%s\n", str1);
	return (0);
}
