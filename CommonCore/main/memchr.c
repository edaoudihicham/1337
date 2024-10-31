#include "../ft_memchr.c"

#include <stdio.h>
#include <string.h>  // For standard memchr

// Paste your ft_memchr function here

void run_test(const char *s, int c, size_t n) {
    printf("Testing with s: \"%s\", character to find: '%c' (ASCII %d), n: %zu\n", s, c, c, n);

    // Using standard memchr
    char *std_result = memchr(s, c, n);
    if (std_result)
        printf("  Standard memchr found '%c' at position: %ld\n", c, std_result - s);
    else
        printf("  Standard memchr did not find '%c'\n", c);

    // Using custom ft_memchr
    char *ft_result = ft_memchr(s, c, n);
    if (ft_result)
        printf("  Custom ft_memchr found '%c' at position: %ld\n", c, ft_result - s);
    else
        printf("  Custom ft_memchr did not find '%c'\n", c);

    // Compare results
    if (std_result == ft_result) {
        printf("  ✅ Both functions returned the same result.\n");
    } else {
        printf("  ❌ Results differ!\n");
    }
    printf("\n");
}

int main() {
    // Test 1: Character present within limit
    printf("Test 1: Character present within limit\n");
    run_test("Hello, World!", 'o', 12);

    // Test 2: Character not present
    printf("Test 2: Character not present\n");
    run_test("Hello, World!", 'z', 12);

    // Test 3: Character is the null terminator
    printf("Test 3: Character is the null terminator\n");
    run_test("Hello, World!", '\0', 13);

    // Test 4: Only searching first few characters
    printf("Test 4: Only searching first few characters\n");
    run_test("Hello, World!", 'o', 4);

    // Test 5: n is zero (should return NULL)
    printf("Test 5: n is zero\n");
    run_test("Hello, World!", 'H', 0);
    
    // Test 5: n is zero (should return NULL)
    printf("Test 5: n is zero\n");
    run_test("Hello,2147483647 World!", 2147483647, 0);

    return 0;
}
