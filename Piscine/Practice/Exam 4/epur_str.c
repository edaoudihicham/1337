#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        char *str = argv[1];

        while (str[i])
        {
            while (str[i] && (str[i] == ' ' || str[i] == '\t'))     // skip intail white spaces
                i++;
            
            while (str[i] && (str[i] > 32))     // write the first bucnh of charcter after white spaces
            {
                ft_putchar(str[i]);
                i++;
            }
            while (str[i] && (str[i] == ' ' || str[i] == '\t')) // skip the middle white spaces
                i++;

            if (str[i] && str[i] > 32)              // print one white space and leav the first loop to skipp the middle white spaces
                ft_putchar(' ');
        }

    }
    ft_putchar('\n');
    return 0;
}