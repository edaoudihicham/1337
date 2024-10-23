/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 00:20:15 by hdaoudi           #+#    #+#             */
/*   Updated: 2024/07/17 20:07:48 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN is_even
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

int	is_even(int nbr)
{
	if (nbr % 2 == 0)
		return (1);
	return (0);
}

#endif
