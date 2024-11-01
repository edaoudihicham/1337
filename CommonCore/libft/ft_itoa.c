/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:44:02 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/01 18:16:34 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <limits.h>

static int	slen(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*filler(int i, int n, int isnegative)
{
	char	*str;

	str = (char *)malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	while (n > 0)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
	if (isnegative == 1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int	isnegative;
	int	i;

	isnegative = 0;
	i = slen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		n *= -1;
		isnegative = 1;
		i = 1 + slen(n);
	}
	return (filler(i, n, isnegative));
}
// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_itoa(-00000001));
// 	return (0);
// }
