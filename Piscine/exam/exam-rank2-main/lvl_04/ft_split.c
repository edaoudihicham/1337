#include <stdlib.h>
#include <stdio.h>

char *ft_strncy(char *s1, char *s2, int n)
{
    int i = -1;
    while (++i < n && s2[i])
        s1[i] = s2[i];
    s1[i] = '\0';
    return s1;
}

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int wc = 0;

    while (str[i])
    {
        while (str[i] && str[i] <= 32)
            i++;
        if (str[i])
            wc++;
        while (str[i] && str[i] > 32)
            i++;
    }

    char **rs = (char **)malloc(sizeof(char *) * (wc + 1));
    i = 0;
    
    while (str[i])
    {
        while (str[i] && str[i] <= 32)
            i++;
        j = i;
        while (str[i] && str[i] > 32)
            i++;
        if (i > j)
        {
            rs[k] = malloc(sizeof(char) * ((i - j) + 1));
            ft_strncy(rs[k++], &str[j], (i - j));
        }
    }
    
    rs[k] = '\0';
    return rs;
}

int main()
{
    char **str = ft_split("You are going to validate the exam tomorow Inchaalah.");
    int i = 0;
    while (str[i])
    {
        printf("%s\n", str[i]);
        i++;
    }

    return 0;
}