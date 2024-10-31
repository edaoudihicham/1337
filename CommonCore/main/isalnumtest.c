#include <stdio.h>
#include <ctype.h>  // For standard isalnum

int	ft_isalnum(int c)
{
	unsigned char	n;

	n = (unsigned char ) c;
	return (((n >= 'a' && n <= 'z')
			|| (n >= 'A' && n <= 'Z')) || (n >= '0' && n <= '9'));
}
void run_test(int c) {
    printf("Testing character: '%c' (ASCII %d)\n", c, c);

    // Using standard isalnum
    int std_result = isalnum(c);
    printf("  Standard isalnum: %d\n", std_result);

    // Using custom ft_isalnum
    int ft_result = ft_isalnum(c);
    printf("  Custom ft_isalnum: %d\n", ft_result);

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

    // Test 2: Lowercase letters
    printf("Test 2: Lowercase letters\n");
    run_test('a');
    run_test('z');

    // Test 3: Uppercase letters
    printf("Test 3: Uppercase letters\n");
    run_test('A');
    run_test('Z');

    // Test 4: Non-alphanumeric characters (symbols)
    printf("Test 4: Non-alphanumeric characters (symbols)\n");
    run_test('!');
    run_test('@');
    run_test(' ');  // Space

    // Test 5: Boundary characters (just outside alphanumeric range)
    printf("Test 5: Boundary characters (outside alphanumeric range)\n");
    run_test('/');
    run_test(':');
    run_test('[');
    run_test('`');

    return 0;
}
