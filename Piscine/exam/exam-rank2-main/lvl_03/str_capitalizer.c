/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:00:44 by ouboukou@st       #+#    #+#             */
/*   Updated: 2024/05/27 23:52:48 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void str_capitalizer(char *s)
{
    int i = 0;
    if (s[i] >= 'a' && s[i] <= 'z')
        s[i] -= 32;
    write (1, &s[i], 1);
    while (s[++i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        if ((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == ' ' || s[i - 1] == '\t'))
                s[i] -= 32;
                write (1, &s[i] , 1);
    }
}

int main (int ac, char **av)
{
    int  i = 1;
    if (ac == 1)
        write(1, "\n", 1);
    else
    {
        while (i < ac)
        {
            str_capitalizer(av[i]);
            write (1, "\n", 1);
            i++;
        }
    }
}