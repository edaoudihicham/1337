/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:21:38 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/10/24 16:07:05 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum (int c)
{
    unsigned char	n;

    n = (unsigned char ) c;
    
    return (((n >= 'a' && n <= 'z') || 
        (n >= 'A' && n <= 'Z')) || (n >= '0' && n <= '9'));
    //return ( ft_isalpha (n) || ft_isdigit (n));
}
