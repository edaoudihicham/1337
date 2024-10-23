// Write a program that takes two strings and displays, without doubles, the
// characters that appear in either one of the strings.

// The display will be in the order characters appear in the command line, and
// will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Example:

// $>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// zpadintoqefwjy$
// $>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6vewg4thras$
// $>./union "rien" "cette phrase ne cache rien" | cat -e
// rienct phas$
// $>./union | cat -e
// $
// $>
// $>./union "rien" | cat -e
// $
// $>

#include <unistd.h>
int main(int argc, char **argv)
{
    int i;
    int j;
    int seen[256] = {0};
    char rslt[256];
    char c;
    char d;
    
    if (argc == 3)
    {
        i = 0;
        j = 0;
        while (argv[1][i])
        {
            c = argv[1][i];
            if (seen[c] == 0)
            {
                rslt[j] = c;
                seen[c] = 1;
                j++;
            }
            i++;
        }
        
        i = 0;
        while (argv[2][i])
        {
            d = argv[2][i];
            if (seen[d] == 0)
            {
                rslt[j] = d;
                seen[d] = 1;
                j++;
            }
            i++;
        }
        rslt[j] = '\0';
    i = 0;
    while (rslt[i])
        write(1, &rslt[i++], 1);
    }

    write (1, "\n", 1);
    return 0;
}