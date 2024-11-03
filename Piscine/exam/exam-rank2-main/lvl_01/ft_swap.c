/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:42:21 by ouboukou          #+#    #+#             */
/*   Updated: 2024/04/26 18:50:52 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 7;
	b = 55;
	printf("befor swaping values: a = %d \t b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After swaping values: a = %d \t b = %d\n", a, b);
}
