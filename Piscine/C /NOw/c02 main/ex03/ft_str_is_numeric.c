/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 21:59:31 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/07/01 22:15:04 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 48 && str[i] <= 57))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main()
{
    printf("%d", ft_str_is_numeric("55"));
}
