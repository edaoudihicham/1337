/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:33:30 by ouboukou          #+#    #+#             */
/*   Updated: 2024/04/27 21:33:41 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
int main()
{
    int n;
    
    n = strcmp("KOLA", "KOLA");
    printf("STD:\t%d\n", n);
    n = ft_strcmp("KOLA", "KOLA");
    printf("ft_:\t%d\n", n);

    n = strcmp("K", "KO");
    printf("STD:\t%d\n", n);
    n = ft_strcmp("K", "KO");
    printf("ft_:\t%d\n", n);

    n = strcmp("", "");
    printf("STD:\t%d\n", n);
    n = ft_strcmp("", "");
    printf("ft_:\t%d\n", n);

    n = strcmp("zbc", "abc");
    printf("STD:\t%d\n", n);
    n = ft_strcmp("zbc", "abc");
    printf("ft_:\t%d\n", n);
        
}