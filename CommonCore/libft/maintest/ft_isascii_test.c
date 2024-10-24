#include <stdio.h>
#include <ctype.h>  // For standard isascii

int	ft_isascii(int c)
{
	return ((c >= 0 && c <= 127));
}
void run_test(int c) {
    printf("Testing character with ASCII value: %d\n", c);

    // Using standard isascii
    int std_result = isascii(c);
    printf("  Standard isascii: %d\n", std_result);

    // Using custom ft_isascii
    int ft_result = ft_isascii(c);
    printf("  Custom ft_isascii: %d\n", ft_result);

    // Compare results
    if (std_result == ft_result) {
        printf("  ✅ Both functions returned the same result.\n");
    } else {
        printf("  ❌ Results differ!\n");
    }
    printf("\n");
}

int main() {
    // Test 1: Valid ASCII characters (0-127)
    printf("Test 1: Valid ASCII characters\n");
    run_test(0);    // Null character
    run_test(65);   // 'A'
    run_test(97);   // 'a'
    run_test(127);  // DEL character

    // Test 2: Non-ASCII characters (outside 0-127 range)
    printf("Test 2: Non-ASCII characters\n");
    run_test(128);  // Beyond ASCII range
    run_test(255);  // Max unsigned char value

    // Test 3: Negative values
    printf("Test 3: Negative values\n");
    run_test(-1);   // Negative value

    return 0;
}
