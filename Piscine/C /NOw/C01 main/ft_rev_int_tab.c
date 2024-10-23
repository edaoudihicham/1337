/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:29:32 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/06/30 16:22:10 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}

int main()
{
	int tab [] = {1,2,3,4,5};
	int size = sizeof(tab) / sizeof(int);

	ft_rev_int_tab(tab, size);

int i;
for (i=0;i < (sizeof (tab) /sizeof (int));i++) {
    printf("%d",tab[i]);
}
}
