/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 21:00:36 by ouboukou          #+#    #+#             */
/*   Updated: 2024/04/26 21:07:28 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argvs[])
{
	int		i;
	char	c;

	if (argc == 2)
	{
		i = 0;
		while (argvs[1][i])
		{
			c = argvs[1][i];
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
				ft_putchar(c + 1);
			}
			else
				ft_putchar(c);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
