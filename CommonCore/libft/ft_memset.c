/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:32:35 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/10 11:17:53 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *)b;
	while (len)
	{
		*temp++ = (unsigned char)c;
		len--;
	}
	return (b);
}
// #include <stdio.h>
// int main ()
// {
// 	char arr[5];
	
// 	ft_memset(&arr[0],'-',1);
// 	ft_memset(&arr[1],'1',1);
// 	ft_memset(&arr[2],'3',1);
// 	ft_memset(&arr[3],'3',1);
// 	ft_memset(&arr[4],'7',1);
// 	printf("%s", arr);
// 	return 0;
// }
