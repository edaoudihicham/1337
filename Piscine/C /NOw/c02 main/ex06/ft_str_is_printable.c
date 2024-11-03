/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 23:13:40 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/07/01 23:13:43 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] > 31 && str[i] < 127))
        {
            return 0;
        }
        i++;
    }
    return (1);
}

int main()
{
    printf("%d\n", ft_str_is_printable(" "));
    printf("%d\n", ft_str_is_printable("ABDELKFSCO"));
    printf("%d\n", ft_str_is_printable("\n\t\v\f"));
    printf("%d\n", ft_str_is_printable("-_134556efSghij67"));
}


/* 
ft_str_is_printable("ABDELKFSCO")        Expected 1
ft_str_is_printable("\n\t\v\f")          Expected 0
ft_str_is_printable("-_134556efSghij67") Expected 1
*/
