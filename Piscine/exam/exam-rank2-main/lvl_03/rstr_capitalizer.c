/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou@student.42.fr <ouboukou>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:11:38 by ouboukou@st       #+#    #+#             */
/*   Updated: 2024/05/27 17:19:54 by ouboukou@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void rstr_capitalizer(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
            str[i] = str[i] - 32;

        ft_putchar(str[i]);
        i++;
    } 
}

int main(int argc, char **argv)
{
    if (argc == 1)
        ft_putchar('\n');

    else 
    {
        int i = 1;

        while (argc > i)
        {
            rstr_capitalizer(argv[1]);
            ft_putchar('\n');
            i++;
        }
    }

    return 0;
}