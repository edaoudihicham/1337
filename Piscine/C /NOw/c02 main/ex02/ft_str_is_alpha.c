/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 21:07:11 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/07/01 21:28:38 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;

	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z'))
		{
			printf("this is true\n");
			return 0;
		}
		i++;
	}
	return 1;
}

int main()
{
	printf("%d", ft_str_is_alpha("5t"));
}
