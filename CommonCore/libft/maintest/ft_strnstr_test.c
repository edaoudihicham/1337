#include "../ft_strnstr.c"

#include <stdio.h>
#include <string.h>  // For standard strnstr

// Paste your ft_strnstr function here

void run_test(const char *haystack, const char *needle, size_t len) {
    printf("Testing with haystack: \"%s\", needle: \"%s\", len: %zu\n", haystack, needle, len);

    // Using standard strnstr
    const char *std_result = strnstr(haystack, needle, len);
    printf("  Standard strnstr result: %s\n", std_result ? std_result : "NULL");

    // Using custom ft_strnstr
    const char *ft_result = ft_strnstr(haystack, needle, len);
    printf("  Custom ft_strnstr result: %s\n", ft_result ? ft_result : "NULL");

    // Compare results
    if (std_result == ft_result) {
        printf("  ✅ Both functions returned the same result.\n");
    } else {
        printf("  ❌ Results differ!\n");
    }
    printf("\n");
}

int main() {
    // Test 1: Normal case where needle is found
    printf("Test 1: Normal case\n");
    run_test("Hello, World!", "World", 12);

    // Test 2: Needle not found within the length limit
    printf("Test 2: Needle not found within the length limit\n");
    run_test("Hello, World!", "World", 5);

    // Test 3: Empty needle (should return haystack)
    printf("Test 3: Empty needle\n");
    run_test("Hello, World!", "", 12);

    // Test 4: Empty haystack (should return NULL)
    printf("Test 4: Empty haystack\n");
    run_test("", "needle", 10);

    // Test 5: Needle longer than haystack
    printf("Test 5: Needle longer than haystack\n");
    run_test("short", "longneedle", 10);

    // Test 6: Needle at the very end of haystack within limit
    printf("Test 6: Needle at the very end of haystack\n");
    run_test("A quick brown fox", "fox", 16);

    // Test 7: Partial match that doesn't complete
    printf("Test 7: Partial match that doesn't complete\n");
    run_test("incomplete match", "matchy", 20);

    return 0;
}
