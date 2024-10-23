/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:55:20 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/07/02 13:20:36 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char    *ft_strupcase(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -=  32 ;
        } i++;
    }
return (str);
}

int main ()
{
   char str[] = "helllo";
    printf("%s", ft_strupcase(str));
}
