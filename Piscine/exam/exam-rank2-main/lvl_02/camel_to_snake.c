/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 00:25:51 by ouboukou          #+#    #+#             */
/*   Updated: 2024/04/27 00:36:16 by ouboukou         ###   ########.fr       */
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

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = argv[1][i];
			if (c >= 'A' && c <= 'Z')
			{
				ft_putchar('_');
				ft_putchar(c + 32);
			}
			else
				ft_putchar(c);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
