#include <stdio.h>

int max(int *tab, unsigned int len)
{
    if (len == 0)
        return 0;

    unsigned int i;
    int res;
    
    i = 0;
    res = tab[i];

    while (i < len)
    {
        if (tab[i] > res)
            res = tab[i];
        i++;
    } 
    return res;
}

int main()
{
    int b[] = {153, 55, 69, -9, 99999, 888547, 6};
    int i = max(b, 7);
    printf("%d", i);
    return 0;
}
