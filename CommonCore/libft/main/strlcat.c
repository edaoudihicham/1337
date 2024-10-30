#include "../ft_strlcat.c"

#include <stdio.h>
#include <string.h>  

// Paste your ft_strlcat function here

void run_test(const char *dst_initial, const char *src, size_t dstsize) {
    char std_dst[100];
    char ft_dst[100];

    // Copy initial destination string into both test buffers
    strncpy(std_dst, dst_initial, sizeof(std_dst) - 1);
    std_dst[sizeof(std_dst) - 1] = '\0';
    strncpy(ft_dst, dst_initial, sizeof(ft_dst) - 1);
    ft_dst[sizeof(ft_dst) - 1] = '\0';

    printf("Testing with dst: \"%s\", src: \"%s\", dstsize: %zu\n", dst_initial, src, dstsize);

    // Using standard strlcat
    size_t std_result = strlcat(std_dst, src, dstsize);
    printf("  Standard strlcat result: %zu, dst after strlcat: \"%s\"\n", std_result, std_dst);

    // Using custom ft_strlcat
    size_t ft_result = ft_strlcat(ft_dst, src, dstsize);
    printf("  Custom ft_strlcat result: %zu, dst after ft_strlcat: \"%s\"\n", ft_result, ft_dst);

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
    run_test("Hello", " World", 20);

    // Test 2: Appending with exact space limit
    printf("Test 2: Appending with exact space limit\n");
    run_test("Hello", " World", 11);

    // Test 3: Not enough space to append full src
    printf("Test 3: Not enough space to append full src\n");
    run_test("Hello", " World", 8);

    // Test 4: dstsize smaller than dst initial length
    printf("Test 4: dstsize smaller than dst initial length\n");
    run_test("Hello", " World", 3);

    // Test 5: Empty src (should leave dst unchanged)
    printf("Test 5: Empty src\n");
    run_test("Hello", "", 10);

    // Test 6: Empty dst (appending src to empty string)
    printf("Test 6: Empty dst\n");
    run_test("", "Hello", 10);

    // Test 7: dstsize is 0 (shouldn't modify dst)
    printf("Test 7: dstsize is 0\n");
    run_test("Hello", " World", 0);

    return 0;
}
