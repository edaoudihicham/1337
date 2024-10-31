#include <stdio.h>
#include <ctype.h>  // For standard tolower

int ft_tolower(int c)
{
	if( c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
void run_test(int c) {
    printf("Testing character: '%c' (ASCII %d)\n", c, c);

    // Using standard tolower
    int std_result = tolower(c);
    printf("  Standard tolower result: '%c' (ASCII %d)\n", std_result, std_result);

    // Using custom ft_tolower
    int ft_result = ft_tolower(c);
    printf("  Custom ft_tolower result: '%c' (ASCII %d)\n", ft_result, ft_result);

    // Compare results
    if (std_result == ft_result) {
        printf("  ✅ Both functions returned the same result.\n");
    } else {
        printf("  ❌ Results differ!\n");
    }
    printf("\n");
}

int main() {
    // Test 1: Uppercase letters
    printf("Test 1: Uppercase letters\n");
    run_test('A');
    run_test('Z');

    // Test 2: Lowercase letters (should remain the same)
    printf("Test 2: Lowercase letters\n");
    run_test('a');
    run_test('z');

    // Test 3: Non-alphabetical characters (should remain the same)
    printf("Test 3: Non-alphabetical characters\n");
    run_test('1');
    run_test('!');
    run_test(' ');  // Space

    // Test 4: Boundary characters
    printf("Test 4: Boundary characters\n");
    run_test('@');  // Just before 'A'
    run_test('[');  // Just after 'Z'

    return 0;
}
