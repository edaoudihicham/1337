/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:24:32 by ouboukou          #+#    #+#             */
/*   Updated: 2024/04/26 23:31:46 by ouboukou         ###   ########.fr       */
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
			if (c >= 'a' && c <= 'z')
			{
				ft_putchar(c - 32);
			}
			else if (c >= 'A' && c <= 'Z')
			{
				ft_putchar(c + 32);
			}
			else
			{
				ft_putchar(c);
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
