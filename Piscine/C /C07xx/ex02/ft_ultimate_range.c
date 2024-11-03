/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:33:03 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/07/15 16:16:56 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (i);
}
