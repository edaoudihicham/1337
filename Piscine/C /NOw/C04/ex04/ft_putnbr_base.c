/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:25:28 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/07/09 12:54:47 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j] || str[i] == '-' || str[i] == '+')
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	unbr;
	int				baselen;
	char			mysymbol;

	baselen = ft_strlen(base);
	if (baselen < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		unbr = (unsigned int)(-nbr);
	}
	else
	{
		unbr = (unsigned int)nbr;
	}
	if (unbr >= (unsigned int)baselen)
	{
		ft_putnbr_base(unbr / baselen, base);
	}
	mysymbol = base[unbr % baselen];
	ft_putchar(mysymbol);
}
