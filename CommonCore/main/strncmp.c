#include "../ft_strncmp.c"

#include <stdio.h>
#include <string.h>  // For standard strncmp

// Paste your ft_strncmp function here

void run_test(const char *s1, const char *s2, size_t n) {
    printf("Testing with s1: \"%s\", s2: \"%s\", n: %zu\n", s1, s2, n);

    // Using standard strncmp
    int std_result = strncmp(s1, s2, n);
    printf("  Standard strncmp result: %d\n", std_result);

    // Using custom ft_strncmp
    int ft_result = ft_strncmp(s1, s2, n);
    printf("  Custom ft_strncmp result: %d\n", ft_result);

    // Compare results
    if (std_result == ft_result) {
        printf("  ✅ Both functions returned the same result.\n");
    } else {
        printf("  ❌ Results differ!\n");
    }
    printf("\n");
}

int main() {
    // Test 1: Identical strings within limit
    printf("Test 1: Identical strings within limit\n");
    run_test("Hello, World!", "Hello, World!", 5);

    // Test 2: Different strings within limit
    printf("Test 2: Different strings within limit\n");
    run_test("Hello, World!", "Hello, Universe!", 7);

    // Test 3: `n` larger than string length
    printf("Test 3: `n` larger than string length\n");
    run_test("Short", "Shorter", 10);

    // Test 4: Comparing empty strings
    printf("Test 4: Comparing empty strings\n");
    run_test("", "", 5);

    // Test 5: Comparing with empty string
    printf("Test 5: Comparing with empty string\n");
    run_test("Hello", "", 3);

    // Test 6: Strings with identical start but different characters later
    printf("Test 6: Identical start, different later\n");
    run_test("abcdef", "abcxyz", 3);

    // Test 7: Exact match within length limit
    printf("Test 7: Exact match within length limit\n");
    run_test("abcdef", "abcdef", 6);

    return 0;
}
