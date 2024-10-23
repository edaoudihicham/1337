#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_str_capitlizer(char *str)
{
    int i = 0;
    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 32;
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

    if (argc == 2)
    {
        ft_str_capitlizer(argv[1]);
    }

    ft_putchar('\n');
    return 0;
}