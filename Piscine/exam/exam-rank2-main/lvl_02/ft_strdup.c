/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 21:54:27 by ouboukou          #+#    #+#             */
/*   Updated: 2024/04/27 23:09:58 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
size_t  ft_strlen(char *s)
{
    size_t  i;
    i = 0;
    while (s[i])
    {
        i++;
    }
    return (i);
}
char    *ft_strdup(char *src)
{
    char    *str;
    size_t  len;
    int     i;
    len = ft_strlen(src);
    str = malloc(len + 1);

    i = 0;
    while (src[i])
    {
        str[i] = src[i];
        i++;  
    }
    str[len + 1] = '\0';
    return str;
}

int main()
{
    char *str;
    char *str1;
    
    str1 = NULL;
    str = NULL;
    char *s =  "123456789";
    
   str = ft_strdup(s);
    str1 = strdup(s);
    
    size_t ft = ft_strlen(s);
    size_t std = ft_strlen(s);

    printf("FT_:\t%s\t\t\tlength:\t%ld", str, ft);
    printf("\n");
    printf("STD:\t%s\t\t\tlength:\t%ld", str1, std);
    
    return 0;
}