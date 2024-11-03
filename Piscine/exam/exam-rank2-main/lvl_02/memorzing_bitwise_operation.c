#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
    int i;
    char bit;

    i = 8;
    while (i--)
    {
        bit = (octet >> i & 1) + 48; //&1 mask all bit expect LSB and extract it
        write (1, &bit, 1);
    }
}
unsigned char	reverse_bits(unsigned char octet)
{
    int i;
    unsigned char rev;

    rev = 0;
    i = 8;
    while (i--)
    {
        rev = rev<<1 | octet&1;
        octet>>=1;
    }
    return rev;
}
unsigned char	swap_bits(unsigned char octet)
{
    return (octet>>4 | octet << 4); // the pipe is used to compined the both operation!!
}

int main()
{
    // 1111 0000
    print_bits(240);

    unsigned char b = reverse_bits(65);
    printf("\n0100  0001\n");
    print_bits(b);
    printf("\n");
    return 0;
}