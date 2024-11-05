#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int n1;
        int n2;

        n1 = atoi(argv[1]);
        n2 = atoi(argv[2]);
        if (n1 > 0 && n2 > 0)
        {
            while (n1 != n2)
            {
                if (n1 > n2)
                    n1 = n1 - n2;
                else
                    n2 = n2 - n1;
            }
            printf("%d", n1);
        }
    }
    printf("\n");
    return 0;
}
