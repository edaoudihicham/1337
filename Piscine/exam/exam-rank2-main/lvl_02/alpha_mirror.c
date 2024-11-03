/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:34:33 by ouboukou          #+#    #+#             */
/*   Updated: 2024/04/27 00:24:55 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i = 0;
	char 	c;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = argv[1][i];
			if (c >= 'a' && c <= 'z')
				c = 'z' - c + 'a';
			
			else if(c >= 'A' && c <= 'Z')
				c = 'Z' - c + 'A';
	
			ft_putchar(c);
		i++;
		}
	}
	ft_putchar('\n');
	return 0;
}
