#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	int i;
	
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
        return ((char *)&s[i]);
	
	return (NULL);
}
void run_test(const char *str, int c) {
    printf("Testing with string: \"%s\" and character: '%c' (ASCII %d)\n", str, c, c);

    // Using standard strchr
    char *std_result = strchr(str, c);
    if (std_result)
        printf("  Standard strchr found '%c' at position: %ld\n", c, std_result - str);
    else
        printf("  Standard strchr did not find '%c'\n", c);

    // Using custom ft_strchr
    char *ft_result = ft_strchr(str, c);
    if (ft_result)
        printf("  Custom ft_strchr found '%c' at position: %ld\n", c, ft_result - str);
    else
        printf("  Custom ft_strchr did not find '%c'\n", c);

    // Compare results
    if (std_result == ft_result)
        printf("  ✅ Both functions returned the same result.\n");
    else
        printf("  ❌ Results differ!\n");

    printf("\n");
}

int main() {
    // Test 1: Normal case, character in the middle
    printf("Test 1: Character in the middle of the string\n");
    run_test("Hello, World!", 'W');

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
