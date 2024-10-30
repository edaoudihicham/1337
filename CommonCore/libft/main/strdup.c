#include <stdio.h>
#include <string.h>  // For standard strdup
#include <stdlib.h>  // For free

#include "../ft_strdup.c"

void run_test(const char *str) {
    printf("Testing string: \"%s\"\n", str);

    // Using standard strdup
    char *std_result = strdup(str);
    printf("  Standard strdup result: \"%s\"\n", std_result);

    // Using custom ft_strdup
    char *ft_result = ft_strdup(str);
    printf("  Custom ft_strdup result: \"%s\"\n", ft_result);

    // Compare results
    if (std_result && ft_result && strcmp(std_result, ft_result) == 0) {
        printf("  ✅ Both functions returned the same result.\n");
    } else {
        printf("  ❌ Results differ!\n");
    }

    // Free allocated memory
    free(std_result);
    free(ft_result);
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
    printf("\"%s\"\n", ft_strdup("hicham"));

    return 0;
}
