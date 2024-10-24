#include <stdio.h>
#include <string.h>  // For standard strlen

size_t	ft_strlen(const char *s)
{
	size_t	i ;

	i = 0 ;
	while (s[i])
	{
		i++;
	}
	return (i);
}
void run_test(const char *str) {
    printf("Testing string: \"%s\"\n", str);

    // Using standard strlen
    size_t std_result = strlen(str);
    printf("  Standard strlen result: %zu\n", std_result);

    // Using custom ft_strlen
    size_t ft_result = ft_strlen(str);
    printf("  Custom ft_strlen result: %zu\n", ft_result);

    // Compare results
    if (std_result == ft_result) {
        printf("  ✅ Both functions returned the same result.\n");
    } else {
        printf("  ❌ Results differ!\n");
    }
    printf("\n");
}

int main() {
    // Test 1: Normal string
    printf("Test 1: Normal string\n");
    run_test("Hello, World!");

    // Test 2: Empty string
    printf("Test 2: Empty string\n");
    run_test("");

    // Test 3: String with spaces
    printf("Test 3: String with spaces\n");
    run_test("  Leading and trailing spaces  ");

    // Test 4: String with special characters
    printf("Test 4: String with special characters\n");
    run_test("Hello\nWorld\t!");

    // Test 5: Long string
    printf("Test 5: Long string\n");
    run_test("This is a really, really, really long string!");

    return 0;
}
