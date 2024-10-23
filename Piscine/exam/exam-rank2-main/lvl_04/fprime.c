#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int n = atoi(argv[1]);
            if (n == 1)
                return(printf("1\n", 0));
        
        int i = 2;
        while (i <= n)
        {
            if (n % i == 0)
            {
                printf("%d", i);
                n = n / i;
                if (n == 1)
                    break;
                printf("*");
            }
            else
                i++;
        }
    }
    printf ("\n");
}