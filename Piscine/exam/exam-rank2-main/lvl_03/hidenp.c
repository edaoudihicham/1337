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

int main(int argc, char **argv)
{

    if (argc == 3)
    {
        int i = 0;
        int j = 0;
        char *s1 = argv[1];
        char *s2 = argv[2];

        while(s2[i])
        {
            if (s2[i] == s1[j])
                j++;

            i++;
        }

        if (s1[j] == '\0')
            {
                ft_putchar('1');
            }
            else 
                ft_putchar('0');
        
    }
    ft_putchar('\n');    
    return 0;
}