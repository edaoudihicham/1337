/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:51:35 by ouboukou          #+#    #+#             */
/*   Updated: 2024/04/26 19:35:38 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(int argc, char *argv[])
{
	char	c;
	int		i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				c = argv[1][i];
				while (c >= 'A')
				{
					ft_putchar(argv[1][i]);
					c--;
				}
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				c = argv[1][i];
				while (c >= 'a')
				{
					ft_putchar(argv[1][i]);
					c--;
				}
			}
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
