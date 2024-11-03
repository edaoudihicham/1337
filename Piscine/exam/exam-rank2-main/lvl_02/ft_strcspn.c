/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:40:28 by ouboukou          #+#    #+#             */
/*   Updated: 2024/04/27 21:51:28 by ouboukou         ###   ########.fr       */
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

// strcspn function search on the s string  on how many charcters that are in reject string
size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (ft_strchr(reject, s[i]))
            return i;
        i++;
    }
    return (i);
}

int main()
{
    int n;
    n = ft_strcspn("hello world", "hello");
    printf("ft_:\t%d\n", n);
    n = strcspn("hello world", "hello");
    printf("STD:\t%d\n", n);

    n = ft_strcspn("hello world", "xx");
    printf("ft_:\t%d\n", n);
    n = strcspn("hello world", "xx");
    printf("STD:\t%d\n", n);

    n = ft_strcspn("hello world", "------ld");
    printf("ft_:\t%d\n", n);
    n = strcspn("hello world", "------ld");
    printf("STD:\t%d\n", n);
    return 0;
}