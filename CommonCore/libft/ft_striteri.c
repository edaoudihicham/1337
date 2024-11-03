/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:25:31 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/03 17:58:03 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	touppers(unsigned int i, char *c)
// {
// 	i = 32;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - i;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "hello";
// 	ft_striteri(str, touppers);
// 	printf("%s", str);
// 	return (0);
// }