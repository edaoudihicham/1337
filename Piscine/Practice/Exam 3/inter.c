/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaoudi <hdaoudi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 00:56:11 by ouboukou          #+#    #+#             */
/*   Updated: 2024/07/12 09:49:19 by hdaoudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
hada logic shel, katbada b string li sghir ou kat7et fkol index dyalo f array tab 1, ou ila kan fiha 1 3awed wa7ed it doesnt matter becuase after you print once you sill set their flag to 0, and then we creat another loop that has an if condtion to check if the flag is on or off, if its on it will print and set the flag to 0, so it wil not print again..
*/

#include <unistd.h>

int main(int argc, char **argv)
{

    if (argc == 3)
    {
        int tab [256] = {0};
        int i = 0;
        char c;
        while (argv[2][i])
        { 
            c = argv[2][i];
            tab[c] = 1;
            i++;
        }

        i = 0;
        while (argv[1][i])
        {
            c = argv[1][i];
            if (tab[c] == 1)
            {
                write (1, &c, 1);
                tab[c] = 0;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
