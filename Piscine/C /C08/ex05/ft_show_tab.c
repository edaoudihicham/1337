/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 00:21:18 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/07/17 20:09:48 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	int	i;
	int	b;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 0 && nb < 10)
	{
		i = nb + '0';
		write(1, &i, 1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		i = nb % 10;
		b = i + '0';
		write(1, &b, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		putstr(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		putstr(par[i].copy);
		i++;
	}
}
