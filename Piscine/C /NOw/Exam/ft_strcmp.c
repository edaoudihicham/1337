#include <stdio.h>

// ft_strcmp function definition
int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

int main()
{
    char str1[] = "hello";
    char str2[] = "hello";
    char str3[] = "world";
    char str4[] = "helloo";

    // Test cases
    int result1 = ft_strcmp(str1, str2);
    int result2 = ft_strcmp(str1, str3);
    int result3 = ft_strcmp(str1, str4);

    // Print results
    printf("Comparing 'hello' and 'hello': %d\n", result1);
    printf("Comparing 'hello' and 'world': %d\n", result2);
    printf("Comparing 'hello' and 'helloo': %d\n", result3);

    return 0;
}
