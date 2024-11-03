/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:08:06 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/03 17:41:10 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// static char toupperss(unsigned int n, char c)
// {
// 	n = 32;
// 	if (c >= 'a' && c <= 'z')
// 		c = c - n;
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// int main()
// {
//     const char *s = "hello";
//     char *result = ft_strmapi(s, toupperss);
//     if (result != NULL)
// 	{
//         printf("%s\n", result);
//         free(result);
// 	}
//     return (0);
// }