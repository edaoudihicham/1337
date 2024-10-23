#include<stdio.h>

unsigned int ft_pcgd(int n1, int n2)
{
    if (n1 > 0 && n2 > 0)
    {
        while (n1 != n2)
        {
            if (n1 > n2)
                n1 = n1 - n2;
            else
                n2 = n2 - n1;
        }
        return n1;
    }
}

unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int pcgd = ft_pcgd(a, b);
    if (pcgd != 0)
        return ((a / pcgd) * b);
    else
        return 0;
}

int main()
{
    unsigned int a = 12;
    unsigned int b = 1555;
    printf("LCM of %u and %u is %u\n", a, b, lcm(a, b));
    return 0;
}