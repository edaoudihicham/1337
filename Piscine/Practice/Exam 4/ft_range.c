/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou@student.42.fr <ouboukou>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:24:09 by ouboukou@st       #+#    #+#             */
/*   Updated: 2024/05/27 18:17:00 by ouboukou@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
    int *range;
    int i;
    int len;

    if (start > end)
        len = (start - end) + 1;
    else
        len = (end - start) + 1;

    range = (int *)malloc(sizeof(int) * len);
    if (!range)
        return NULL;  // Handle memory allocation failure

    i = 0;
    while (len--)
    {
        range[i] = start;
        if (start < end)
            start++;
        else
            start--;
        i++;
    }

    return range;
}
int main() 
{
    int *range;
    int i;

    int start1 = 2;
    int end1 = 6;
    
    range = ft_range(start1, end1);
    
    printf("Range from %d to %d: ", start1, end1);
    for (i = 0; i <= end1 - start1; i++) {
        printf("%d ", range[i]);
    }
    printf("\n");

    return 0;
}

