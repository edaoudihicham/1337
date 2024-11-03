/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:08:06 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/11/03 16:28:50 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	size_t len;
	char *str;
	
	i = 0;
	len =ft_strlen (s);
	str = (char *)malloc((len + 1) * sizeof(char*));
	if (str == NULL)
		return (NULL);
	while(s[i] != '\0')
	{
		str[i] = f(i,s[i]);
	}
	return (str);
}