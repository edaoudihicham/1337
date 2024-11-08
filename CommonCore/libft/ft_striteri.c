/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:25:31 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/08 13:16:14 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	nextalpha(unsigned int i, char *c)
// {
// 	*c = *c + i;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
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
// 	char str[] = "aaaaa";
// 	ft_striteri(str, nextalpha);
// 	printf("%s", str);
// 	return (0);
// }
