/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 18:34:45 by angavrel          #+#    #+#             */
/*   Updated: 2024/07/07 20:44:47 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *s)
{
	int		sign;
	long	r;

	r = 0;
	sign = 1;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		r *=  10;
		r += *s - '0';
		s++;
	}
	return (sign * (int)r);
}

#include <stdio.h>

int		main(int argc, char **argv)
{
	printf("%d",ft_atoi(argv[1]));
	return(0);
}
