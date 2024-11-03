/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:33:55 by ouboukou          #+#    #+#             */
/*   Updated: 2024/05/24 20:07:35 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		while (argv[2][i])
		{
			if (argv[2][i] == argv[1][j])
				j++;

			i++;

			if (argv[1][j] == '\0')
			{
				ft_putstr(argv[1]);
				break ;
			}
		}
	}

	write(1, "\n", 1);
	return (0);
}