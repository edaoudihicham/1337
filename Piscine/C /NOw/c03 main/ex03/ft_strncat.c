/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:55:01 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/07/03 17:55:23 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char src[5] = "World";
	char dest[5] = "Hello";

	printf("%s",ft_strncat(dest,src, 4));
}


/* 
✓ [1] Concatenate two strings Expected output "Hello World", got "Hello World"
✓ [2] Concatenate two empty strings Expected output "", got ""
✓ [3] Concatenate a string with an empty string Expected output "Hello", got "Hello"
  [4] Concatenate a string with another string of same length Expected output "HelloWorld", got "HelloWorldd"
  [5] Concatenate a string with another string but with n less than src length Expected output "HelloWo", got "HelloWorldd"
*/
