
#include <unistd.h>

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        int end;
        int start;
        int flag;
        while (av[1][i])
            i++;
        while (i >= 0)
        {
            while (av[1][i] <= 32)  // back to skip all spa
                i--;

            end = i;
            while (av[1][i] && av[1][i] > 32)
                i--;
            start = i + 1;
            flag = start;
            while (start <= end)
            {
                write (1, &av[1][start], 1);
                start++;
            }
            if (flag)
                write (1, " ", 1);
        }
    }
    write (1, "\n", 1);
}