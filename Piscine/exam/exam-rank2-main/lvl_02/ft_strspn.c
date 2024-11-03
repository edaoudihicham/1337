/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:09:05 by ouboukou          #+#    #+#             */
/*   Updated: 2024/04/27 22:52:18 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


char    *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == c)
            return ((char *)s);
    s++;
    }
    return (NULL);
}

size_t  ft_strspn(const char *s, const char *accept)
{
    int i;
    i = 0;
    while (s[i])
    {
        if(!ft_strchr(accept, s[i]))
            return i;
        i++;
    }
    return i;
}

int main()
{
    int n;
    n = ft_strspn("hello world", "hello");
    printf("ft_:\t%d\n", n);
    n = strspn("hello world", "hello");
    printf("STD:\t%d\n", n);

    n = ft_strspn("hello world", "xx");
    printf("ft_:\t%d\n", n);
    n = strspn("hello world", "xx");
    printf("STD:\t%d\n", n);

    n = ft_strspn("hello world", "world");
    printf("ft_:\t%d\n", n);
    n = strspn("hello world", "world");
    printf("STD:\t%d\n", n);
    return 0;
}