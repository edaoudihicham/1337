/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 23:18:08 by ouboukou          #+#    #+#             */
/*   Updated: 2024/04/28 00:57:35 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>

char	*ft_strrev(char *str)
{
	size_t	l;
	size_t	i;
	char temp;

	l = strlen(str);
	i = 0;
	l--;	// we increament l by one because str array is index zero
	while (i < l) //we did set this condtion to make sure when we reach the midle we stop.
	{
		temp = str[i];
		str[i] = str[l];
		str[l] = temp;
		i++;
		l--;
	}
	return str;
}

int	main()
{
	char str[] = "ok po ji ty";
	printf("%s\n", ft_strrev(str));
	return 0;
}