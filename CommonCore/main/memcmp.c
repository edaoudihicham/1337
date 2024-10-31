#include <stdio.h>
#include <string.h>  // For standard memcmp

int	ft_memcmp(const void *s1, const void *s2, size_t n)
 {
    unsigned char	*str1;
    unsigned char	*str2;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;

    size_t	i; 
    i = 0;
		
	while (i < n)
	{
        if (str1[i] != str2[i])
			{
            return ((str1[i] - str2[i]));
            }
        i++;
    }
    return (0);
}

void run_test(const void *s1, const void *s2, size_t n) {
    // Using standard memcmp
    int std_result = memcmp(s1, s2, n);
    printf("  Standard memcmp result: %d\n", std_result);

    // Using custom ft_memcmp
    int ft_result = ft_memcmp(s1, s2, n);
    printf("  Custom ft_memcmp result: %d\n", ft_result);

    // Compare results
    if (std_result == ft_result) {
        printf("  ✅ Both functions returned the same result.\n");
    } else {
        printf("  ❌ Results differ!\n");
    }
    printf("\n");
}

int main() {
    // Test 1: Identical memory blocks
    printf("Test 1: Identical memory blocks\n");
    char mem1[] = "abcdef";
    char mem2[] = "abcdef";
    run_test(mem1, mem2, 6);

    // Test 2: Different memory blocks (first difference in the middle)
    printf("Test 2: Different memory blocks (first difference in the middle)\n");
    char mem3[] = "abcxef";
    run_test(mem1, mem3, 6);

    // Test 3: Different memory blocks (first difference at the beginning)
    printf("Test 3: Different memory blocks (first difference at the beginning)\n");
    char mem4[] = "xbcdef";
    run_test(mem1, mem4, 6);

    // Test 4: Compare partial memory blocks (first n bytes are equal)
    printf("Test 4: Compare partial memory blocks (first n bytes are equal)\n");
    run_test(mem1, mem3, 3);

    // Test 5: Zero-length comparison
    printf("Test 5: Zero-length comparison\n");
    run_test(mem1, mem2, 0);

    return 0;
}
