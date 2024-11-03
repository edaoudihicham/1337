/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 00:21:07 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/07/17 20:08:35 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*cpy(char *s2, int j)
{
	int		i;
	char	*s1;

	i = 0;
	s1 = malloc((j + 1) * sizeof(char));
	if (s1 == 0)
		return (0);
	while (i < j)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_str	*ptr;

	i = 0;
	if (ac < 0)
		return (0);
	ptr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (ptr == 0)
		return (0);
	while (i < ac)
	{
		j = len(av[i]);
		ptr[i].size = j;
		ptr[i].str = av[i];
		ptr[i].copy = cpy(av[i], j);
		if (ptr[i].copy == 0)
			return (0);
		i++;
	}
	ptr[i].str = 0;
	ptr[i].copy = 0;
	ptr[i].size = 0;
	return (ptr);
}
