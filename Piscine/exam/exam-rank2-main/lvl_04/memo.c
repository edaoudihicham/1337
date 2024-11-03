#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        int end = 0;
        int start = 0;
        int flag = 0;
        char *str = argv[1];

        while (str[i])
            i++;

        while (i >= 0)
        {
            while (str[i] <= 32)
                i--;

            end = i;

            while (str[i] && str[i] > 32)
                i--;

            start = i + 1;
            flag = start;
            while (start <= end)
            {
                write (1, &str[start], 1);
                start++;
            }
            if (flag)
                write (1, " ", 1);
        }
    }

    return 0;
}