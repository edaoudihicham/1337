/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:28:19 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/07/13 18:41:43 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
