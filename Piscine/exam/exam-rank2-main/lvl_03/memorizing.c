/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memorizing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou@student.42.fr <ouboukou>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 23:04:17 by ouboukou@st       #+#    #+#             */
/*   Updated: 2024/05/27 03:50:37 by ouboukou@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}
void ft_putnbr (int nbr)
{
    long n;
    n = nbr;

    if(n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else 
        ft_putchar(n + 48);
}
int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int rslt = 0;
    
    while (str[i] == ' ' || str[i] == '\t')
        i++;

    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        rslt = rslt * 10 + str[i] - 48;
        i++;
    }

    return (rslt * sign);
}
int is_prime (int n)
{
    int i = 2;

    if (n <= 1)
        return 0;

    while (i * i <= n)
    {
        if (n % 2 == 0)
            return 0;
        i++;
    }
    return 1;
}

void str_cap(char *str)
{
    int i = 0;

    if (str[i] >= 'a' && str[i] <= 'z')
        str[i]= str[i] - 32;
        ft_putchar(str[i]);
    while (str[++i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t'))
            str[i] = str[i] - 32;
        ft_putchar(str[i]);
    }
}

int main(int argc, char **argv)
{
    if (argc  == 1)
    ft_putchar('\n');
    
    else
    {
        int i = 1;
        while (i < argc)
        {
            str_cap(argv[i]);
            ft_putchar('\n');
            i++;
        }
    }
    return 0;
}