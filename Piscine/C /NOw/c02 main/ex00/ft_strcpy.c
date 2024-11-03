/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:26:13 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/07/01 13:58:17 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int    i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int    main(void)
{
    char    src[] = "TcXF";
    char    dest[12];

    printf("%s", ft_strcpy(dest, src));
}

/* 
[1] ft_strcpy(dest[12], "FGccjqWCcYr") Expected "FGccjqWCcYr", got ""
[2] ft_strcpy(dest[40],  "gVepWWXynLOXqCHCscGrowUZSebdZIfy") Expected "gVepWWXynLOXqCHCscGrowUZSebdZIfy",got ""
[3] ft_strcpy(dest[4], "TcXF") Expected "TcXF", got ""
*/
