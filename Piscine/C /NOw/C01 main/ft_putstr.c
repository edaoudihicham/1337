/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:15:39 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/06/29 20:16:47 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char str[])
{

	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
}

int main()
{
	char *str = "Hicham";
	ft_putstr(str);
}
