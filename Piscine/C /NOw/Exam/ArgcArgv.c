#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0; // Start from 1 to skip the program name

    while (i < argc) // Iterate through each argument
    {
        int j = 0;
        while (argv[i][j] != '\0') // Iterate through each character of the argument
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, "\n", 1); // Write a newline after each argument
        i++;
    }
    return 0;
}
