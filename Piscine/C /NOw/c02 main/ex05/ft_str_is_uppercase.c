/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 23:13:15 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/07/01 23:13:19 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i=0;
    while(str[i] != '\0')
    {
        if(!(str[i] >= 'A' && str[i] <= 'Z'))
        {
            return 0;
        }i++;
    }
    return (1);
}

int main()
{
	printf("%d",ft_str_is_uppercase("AAAAA") );
}
