#include <stdio.h>
#include <ctype.h>  // For standard toupper

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

void run_test(int c) {
    printf("Testing character: '%c' (ASCII %d)\n", c, c);

    // Using standard toupper
    int std_result = toupper(c);
    printf("  Standard toupper result: '%c' (ASCII %d)\n", std_result, std_result);

    // Using custom ft_toupper
    int ft_result = ft_toupper(c);
    printf("  Custom ft_toupper result: '%c' (ASCII %d)\n", ft_result, ft_result);

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

    // Test 2: Uppercase letters (should remain the same)
    printf("Test 2: Uppercase letters\n");
    run_test('A');
    run_test('Z');

    // Test 3: Non-alphabetical characters (should remain the same)
    printf("Test 3: Non-alphabetical characters\n");
    run_test('1');
    run_test('!');
    run_test(' ');  // Space

    // Test 4: Boundary characters
    printf("Test 4: Boundary characters\n");
    run_test('`');  // Just before 'a'
    run_test('{');  // Just after 'Z'

    return 0;
}
