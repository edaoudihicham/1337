/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:58:38 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/07/14 16:12:53 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min;
	array = malloc(sizeof(int) * range);
	if (array == 0)
		return (0);
	while (i < range)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
