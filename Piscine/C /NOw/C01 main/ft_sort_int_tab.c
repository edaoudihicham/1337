/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:07:35 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/06/30 16:11:47 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab [i] = tab [i + 1];
				tab [i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}


int main()
{
int tab [] = {5,4,6,0,-5,9,3,2,1};
int size = sizeof(tab) / sizeof(tab[0]);

ft_sort_int_tab(tab, size);

printf("%d, %d, %d, %d, %d,%d, %d, %d, %d ", tab[0], tab[1], tab[2], tab[3], tab[4],tab[5], tab[6], tab[7], tab[8]);

return 0;
}
