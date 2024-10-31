#include <stdio.h>
#include <ctype.h>  // For standard isalpha

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
void run_test(int c) {
    printf("Testing character: '%c' (ASCII %d)\n", c, c);

    // Using standard isalpha
    int std_result = isalpha(c);
    printf("  Standard isalpha: %d\n", std_result);

    // Using custom ft_isalpha
    int ft_result = ft_isalpha(c);
    printf("  Custom ft_isalpha: %d\n", ft_result);

    // Compare results
    if (std_result == ft_result) {
        printf("  ✅ Both functions returned the same result.\n");
    } else {
        printf("  ❌ Results differ!\n");
    }
    printf("\n");
}

int main() {
    // Test 1: Lowercase letters
    printf("Test 1: Lowercase letters\n");
    run_test('a');
    run_test('z');

    // Test 2: Uppercase letters
    printf("Test 2: Uppercase letters\n");
    run_test('A');
    run_test('Z');

    // Test 3: Non-alphabetic characters (digits and symbols)
    printf("Test 3: Non-alphabetic characters (digits and symbols)\n");
    run_test('0');
    run_test('9');
    run_test('!');
    run_test('@');
    run_test(' ');  // Space

    // Test 4: Boundary characters (just outside alphabetic range)
    printf("Test 4: Boundary characters (outside alphabetic range)\n");
    run_test('[');
    run_test('`');
    run_test('{');

    return 0;
}

