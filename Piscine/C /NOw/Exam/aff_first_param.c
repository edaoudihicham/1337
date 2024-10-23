#include <unistd.h>

int main(int argc, char **argv)
{

    if(argc > 1)
    {
        int j = 0;
        while (argv[1][j] != '\0') // Iterate through each character of the argument
        {
            write(1, &argv[1][j], 1);
            j++;
        }
    }else 
    {
        write(1, "\n", 1);
        return 0;
    }

 return 0;
}
