/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:43:24 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/07/02 14:43:27 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] += 32;
        }
        i++;
    }
    return (str);
}

char    *ft_strcapitalize(char *str)
{
   ft_strlowcase(str);

    if (str[0] <= 'z' && str[0] >= 'a')
    {
        str[0] -= 32;
    }

    int i;

    i = 1;
    while (str[i])
    {
        if(!((str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= 'A' && str[i - 1] <= 'Z') || (str[i - 1] >= '0' && str[i - 1] <= '9')))
        {
            if ((str[i] >= 'a' && str[i] <= 'z'))
            str[i] -= 32;
        }
        i++;
    }

return (str);
}

int main()
{

    char str [] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf ("%s", ft_strcapitalize(str));
}
