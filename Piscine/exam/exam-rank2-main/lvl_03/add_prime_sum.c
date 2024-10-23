
#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int rslt = 0;

    while (str[i] == ' ' || str[i] == '\t')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        rslt = rslt * 10 + str[i] - '0';
        i++;
    }
    return (rslt * sign);
}

void ft_putnbr(int nbr)
{
    long n = nbr;
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr = -nbr;
    }

    if (n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
        ft_putchar(n + 48);
}

int is_prime(int n)
{
    if (n <= 1)
        return 0;
    
    int i = 2;

    while (i * i <= n)
    {
        if (n % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int sum = 0;
        int n = ft_atoi(argv[1]);
        if (n <= 1)
            return 0;
        
        while (n)
        {
            if (is_prime(n))
                sum = sum + n;
            n--;
        }
        ft_putnbr(sum);
    }
    ft_putchar('\n');
    return 0;
}