#include<stdlib.h>

int digits_len(int nbr)
{
    int len = 0;
    if (nbr <= 0)
        len++;

    while (nbr)
    {
        nbr = nbr / 10;
        len++;
    }
    return len;
}
char    *ft_itoa(int nbr)
{
    if (nbr == 0)
    {
        char *c = malloc(2);
        c = "0\0";
        return c;
    }    

    long n = nbr;    
    int len = digits_len(n);
    char *rslt = malloc(sizeof(char) * len + 1);
    if (!rslt)
        return (0);

    if (n < 0)
        n = -n;
        
    rslt[len] = '\0';
    
   len--;
    while (len >= 0)
    {
        rslt[len] = (n % 10) + '0';
        n = n / 10;
        len--;
    }
    if (nbr < 0)
        rslt[0] = '-';

    return rslt;
}
#include<stdio.h>
int main()
{
    // printf("%d\n", digits_len(-1));
    printf("%s\n", ft_itoa(0));
    printf("%s\n", ft_itoa(-59));
    printf("%s\n", ft_itoa(1559555));

}
