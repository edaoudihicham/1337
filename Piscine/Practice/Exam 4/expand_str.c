#include <unistd.h>

void    expand_str(char *str)
{
    int i = 0;

    while (str[i])
    {
        while (str[i] && str[i] <= 32)
            i++;

        while (str[i] && str[i] > 32)
        {
            write (1, &str[i], 1);
            i++;
        }
        while (str[i] && str[i] <= 32)
            i++;
        
        if (str[i] && str[i] > 32)
            write (1, "   ", 3);
    }

}
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        expand_str(argv[1]);
    }
    write (1, "\n", 1);

    return 0;
}
