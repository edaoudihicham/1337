/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:53:29 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/06/29 15:53:32 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

int main ()
{
	int a = 10;
	int b = 5;
	int* ptra = &a; 
	int* ptrb = &b;

	ft_ultimate_div_mod(ptra, ptrb);
	printf ("a = %d and b = %d", a ,b);
}
