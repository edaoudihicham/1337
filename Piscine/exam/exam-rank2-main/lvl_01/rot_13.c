/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:11:33 by ouboukou          #+#    #+#             */
/*   Updated: 2024/04/26 20:59:21 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	c;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			c = argv[1][i];
			if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
			{
				c = c + 13;
				ft_putchar(c);
			}
			else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
			{
				c = c - 13;
				ft_putchar(c);
			}
			else
				ft_putchar(c);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
