/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:04:37 by ouboukou          #+#    #+#             */
/*   Updated: 2024/04/27 17:32:45 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	sign;
	int	n;

	sign = 1;
	n = 0;
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + *str - 48;
		str++;
	}
	return (n * sign);
}

int	main(void)
{
	int n = atoi("ks++4785");
	printf("std:\t%d\n", n);
	n = ft_atoi("ks++4785");
	printf("ft_:\t%d\n", n);

	n = atoi("             -47859sdsd");
	printf("std:\t%d\n", n);
	n = ft_atoi("             -47859sdsd");
	printf("ft_:\t%d\n", n);

	n = atoi("-4799ds85");
	printf("std:\t%d\n", n);
	n = ft_atoi("-4799ds85");
	printf("ft_:\t%d\n", n);

	n = atoi("k-4785");
	printf("std:\t%d\n", n);
	n = ft_atoi("k-4785");
	printf("ft_:\t%d\n", n);

	n = atoi("+-4s785");
	printf("std:\t%d\n", n);
	n = ft_atoi("+-4s785");
	printf("ft_:\t%d\n", n);
	return (0);
}