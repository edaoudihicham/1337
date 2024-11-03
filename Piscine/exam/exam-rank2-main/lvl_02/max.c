/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:12:13 by ouboukou          #+#    #+#             */
/*   Updated: 2024/05/24 20:13:31 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int max(int *tab, unsigned int len)
{
    if (len == 0)
        return 0;

    int i;
    int res;
    
    i = 0;
    res = tab[i];

    while (tab[i])
    {
        if (tab[i] > res)
            res = tab[i];
        i++;
    } 
    return res;
}

int main()
{
    int b[] = {153, 55, 69, -9, 99999, 888547, 6};
    int i = max(b, 7);
    printf("%d", i);
    return 0;
}