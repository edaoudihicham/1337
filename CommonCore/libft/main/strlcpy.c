#include "../ft_strlcpy.c"

#include <stdio.h>
#include <string.h>  // For standard strlcpy

// Paste your ft_strlcpy function here

void run_test(const char *src, size_t dstsize) {
    char std_dst[100];
    char ft_dst[100];

    // Initialize destination buffers
    memset(std_dst, 'A', sizeof(std_dst) - 1);
    std_dst[sizeof(std_dst) - 1] = '\0';
    memset(ft_dst, 'A', sizeof(ft_dst) - 1);
    ft_dst[sizeof(ft_dst) - 1] = '\0';

    printf("Testing with src: \"%s\", dstsize: %zu\n", src, dstsize);

    // Using standard strlcpy
    size_t std_result = strlcpy(std_dst, src, dstsize);
    printf("  Standard strlcpy result: %zu, dst after strlcpy: \"%s\"\n", std_result, std_dst);

    // Using custom ft_strlcpy
    size_t ft_result = ft_strlcpy(ft_dst, src, dstsize);
    printf("  Custom ft_strlcpy result: %zu, dst after ft_strlcpy: \"%s\"\n", ft_result, ft_dst);

    // Compare results
    if (std_result == ft_result && strcmp(std_dst, ft_dst) == 0) {
        printf("  ✅ Both functions returned the same result.\n");
    } else {
        printf("  ❌ Results differ!\n");
    }
    printf("\n");
}

int main() {
    // Test 1: Normal case with enough space
    printf("Test 1: Normal case with enough space\n");
    run_test("Hello, World!", 20);

    // Test 2: Exact space for src (including null terminator)
    printf("Test 2: Exact space for src\n");
    run_test("Hello, World!", 14);

    // Test 3: dstsize smaller than src length
    printf("Test 3: dstsize smaller than src length\n");
    run_test("Hello, World!", 5);

    // Test 4: dstsize is zero (should not copy anything)
    printf("Test 4: dstsize is zero\n");
    run_test("Hello, World!", 0);

    // Test 5: Empty src (should result in an empty dst)
    printf("Test 5: Empty src\n");
    run_test("", 10);

    return 0;
}
