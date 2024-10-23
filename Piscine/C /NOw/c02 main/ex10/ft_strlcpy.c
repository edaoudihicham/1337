/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:10:29 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/07/02 16:10:33 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	
	len = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

int	main()
{
	char src[] = "ssssss";
	char dest[] = "Hello ";

	printf("%s| len %d\n", dest, ft_strlcpy(dest, src, 5));
	printf("%s| len %lu", dest, strlcpy(dest, src, 5));
}

  
  
/*  
  ✓ [1] ft_strlcpy(dest[10], "World!", 10) Expected "World!" (len 6), got "World!" (len 6)
    [2] ft_strlcpy(dest[10], "Hello, World!", 10) Expected "Hello, Wo" (len 9), got "Hello, Wo" (len 13)
    [3] ft_strlcpy(dest[5], "Hello, World!", 5) Expected "Hell" (len 4), got "Hell" (len 13)
  ✓ [4] ft_strlcpy(dest[10], "", 5) Expected "" (len 0), got "" (len 0)
    [5] ft_strlcpy(dest[1], "Hello, World!", 1) Expected "" (len 0), got "" (len 13)
 */
