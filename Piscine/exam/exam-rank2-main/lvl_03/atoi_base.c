#include <stdio.h>

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return c;
}

int ft_atoi_base(const char *str, int base)
{
    if (base < 2 || base > 16)
        return (0);
        
    int i = 0;
    int rslt = 0;
    int sign = 1;
    int digit;
    char c;
    
 
    if (str[i] == '-')
    {
        sign = -sign;
        i++;
    }
    
    while (str[i])
    {
        c = to_lower(str[i]);

        if (c >= '0' && c <= '9')
            digit = c - 48;

        else if (c >= 'a' && c <= 'f')
            digit = c - 'a' + 10;

        else
            break;

        rslt = rslt * base + digit;
        i++;
    }
    
    return (rslt * sign);
}


int main()
{
    // Test cases
    const char *test1 = "ff";                  // Base 16
    const char *test2 = "-ff";                 // Base 16 with negative sign
    const char *test3 = "7fffffff";            // Large number in base 16
    const char *test4 = "11111111";            // Base 2
    const char *test5 = "z";                   // Invalid character for base 16
    const char *test6 = "10";                  // Base 10
    const char *test7 = "";                    // Empty string
    const char *test8 = "1010101010101010";    // Large number in base 2
    const char *test9 = "0123456789abcdef";    // Base 16
    const char *test10 = "-0123456789abcdef";  // Base 16 with negative sign
    const char *test11 = "abcdef";             // Base 16 lower case
    const char *test12 = "ABCDEF";             // Base 16 upper case

    // Outputs
    printf("Base 16, %s: %d\n", test1, ft_atoi_base(test1, 1));        // Should return 255
    printf("Base 16, %s: %d\n", test2, ft_atoi_base(test2, 16));        // Should return -255
    printf("Base 16, %s: %d\n", test3, ft_atoi_base(test3, 16));        // Should return 2147483647
    printf("Base 2, %s: %d\n", test4, ft_atoi_base(test4, 2));          // Should return 255
    printf("Base 16, %s: %d\n", test5, ft_atoi_base(test5, 16));        // Should return 0 (invalid character)
    printf("Base 10, %s: %d\n", test6, ft_atoi_base(test6, 10));        // Should return 10
    printf("Base 10, %s: %d\n", test7, ft_atoi_base(test7, 10));        // Should return 0 (empty string)
    printf("Base 2, %s: %d\n", test8, ft_atoi_base(test8, 2));          // Should return 43690
    printf("Base 16, %s: %d\n", test9, ft_atoi_base(test9, 16));        // Should return 81985529216486895
    printf("Base 16, %s: %d\n", test10, ft_atoi_base(test10, 16));      // Should return -81985529216486895
    printf("Base 16, %s: %d\n", test11, ft_atoi_base(test11, 16));      // Should return 11259375
    printf("Base 16, %s: %d\n", test12, ft_atoi_base(test12, 16));      // Should return 11259375

    return 0;
}
