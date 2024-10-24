#include <stdio.h>
#include <ctype.h>  // For standard isdigit

int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}

void run_test(int c) {
    printf("Testing character: '%c' (ASCII %d)\n", c, c);

    // Using standard isdigit
    int std_result = isdigit(c);
    printf("  Standard isdigit: %d\n", std_result);

    // Using custom ft_isdigit
    int ft_result = ft_isdigit(c);
    printf("  Custom ft_isdigit: %d\n", ft_result);

    // Compare results
    if (std_result == ft_result) {
        printf("  ✅ Both functions returned the same result.\n");
    } else {
        printf("  ❌ Results differ!\n");
    }
    printf("\n");
}

int main() {
    // Test 1: Digit characters
    printf("Test 1: Digit characters\n");
    run_test('0');
    run_test('9');

    // Test 2: Non-digit characters (letters and symbols)
    printf("Test 2: Non-digit characters\n");
    run_test('a');
    run_test('Z');
    run_test('!');
    run_test(' ');  // Space

    // Test 3: Boundary characters (just outside digit range)
    printf("Test 3: Boundary characters\n");
    run_test('/');
    run_test(':');

    return 0;
}
