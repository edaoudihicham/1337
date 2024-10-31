#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
    {
	int len;
	
	len = 0;
	while (s[len])
	{
		len++;
	}

    if (c == '\0')
        return ((char *)&s[len]);

    while(len--)
    {
        if (s[len] == c)
            return ((char *)&s[len]);
    }
    
	return (NULL);
}
}

void run_test(const char *str, int c) {
    printf("Testing with string: \"%s\" and character: '%c' (ASCII %d)\n", str, c, c);

    // Using standard strrchr
    char *std_result = strrchr(str, c);
    if (std_result)
        printf("  Standard strrchr found '%c' at position: %ld\n", c, std_result - str);
    else
        printf("  Standard strrchr did not find '%c'\n", c);

    // Using custom ft_strrchr
    char *ft_result = ft_strrchr(str, c);
    if (ft_result)
        printf("  Custom ft_strrchr found '%c' at position: %ld\n", c, ft_result - str);
    else
        printf("  Custom ft_strrchr did not find '%c'\n", c);

    // Compare results
    if (std_result == ft_result)
        printf("  ✅ Both functions returned the same result.\n");
    else
        printf("  ❌ Results differ!\n");

    printf("\n");
}

int main() {
    // Test 1: Normal case, character in the middle (multiple occurrences)
    printf("Test 1: Multiple occurrences of character in the string\n");
    run_test("Hello, World!", 'o');

    // Test 2: Character at the beginning
    printf("Test 2: Character at the beginning of the string\n");
    run_test("Hello, World!", 'H');

    // Test 3: Character at the end
    printf("Test 3: Character at the end of the string\n");
    run_test("Hello, World!", '!');

    // Test 4: Character not in the string
    printf("Test 4: Character not found in the string\n");
    run_test("Hello, World!", 'x');

    // Test 5: Null character search (special case)
    printf("Test 5: Null character search\n");
    run_test("Hello, World!", '\0');

    // Test 6: Empty string
    printf("Test 6: Empty string\n");
    run_test("", 'H');

    // Test 7: Empty string with null character
    printf("Test 7: Empty string, searching for null character\n");
    run_test("", '\0');

    return 0;
}
