#include <stdio.h>
#include <ctype.h>  // For standard isprint

int	ft_isprint(int c)
{
	return ((c >= 32 && c <= 126));
}
void run_test(int c) {
    printf("Testing character with ASCII value: %d\n", c);

    // Using standard isprint
    int std_result = isprint(c);
    printf("  Standard isprint: %d\n", std_result);

    // Using custom ft_isprint
    int ft_result = ft_isprint(c);
    printf("  Custom ft_isprint: %d\n", ft_result);

    // Compare results
    if (std_result == ft_result) {
        printf("  ✅ Both functions returned the same result.\n");
    } else {
        printf("  ❌ Results differ!\n");
    }
    printf("\n");
}

int main() {
    // Test 1: Printable characters
    printf("Test 1: Printable characters\n");
    run_test(32);    // Space
    run_test(48);    // '0'
    run_test(65);    // 'A'
    run_test(97);    // 'a'
    run_test(126);   // '~'

    // Test 2: Non-printable characters
    printf("Test 2: Non-printable characters\n");
    run_test(0);     // Null character
    run_test(31);    // Just before space
    run_test(127);   // DEL character

    return 0;
}
