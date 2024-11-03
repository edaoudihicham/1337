/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 23:10:45 by ouboukou          #+#    #+#             */
/*   Updated: 2024/04/27 23:16:35 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == c)
            return ((char *)s);
        s++;
    }
    return NULL;
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
    while (*s1)
    {
        if(ft_strchr(s2, *s1))
            return ((char *)s1);
        s1++;  
    }
    return NULL;
}