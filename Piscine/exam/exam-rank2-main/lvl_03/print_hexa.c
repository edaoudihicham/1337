/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:16:57 by ouboukou          #+#    #+#             */
/*   Updated: 2024/05/27 22:41:25 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


void ft_putchar(char c)
{
    write (1, &c, 1);
}

void print_hexa(int n)
{
    const char *hexa = "0123456789abcdef";
    
    if (n >= 16)
        print_hexa(n / 16);
    ft_putchar(hexa[n % 16]);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        print_hexa(atoi(argv[1]));
        printf("\n%x\n", 25);
    }
    ft_putchar('\n');
    return 0;
}
