#include <stdio.h>
#include <stdlib.h>  // For standard calloc and free
#include <string.h>  // For memset and memcmp

#include "../ft_calloc.c"
void run_test(size_t nmemb, size_t size) {
    printf("Testing ft_calloc with %zu elements of %zu bytes each\n", nmemb, size);

    // Using standard calloc
    void *std_result = calloc(nmemb, size);
    if (!std_result) {
        printf("  Standard calloc returned NULL (allocation failed)\n\n");
        return;
    }

    // Using custom ft_calloc
    void *ft_result = ft_calloc(nmemb, size);
    if (!ft_result) {
        printf("  Custom ft_calloc returned NULL (allocation failed)\n\n");
        free(std_result);
        return;
    }

    // Compare results by checking that both allocations are zero-initialized
    int is_zero_initialized_std = memcmp(std_result, memset(std_result, 0, nmemb * size), nmemb * size) == 0;
    int is_zero_initialized_ft = memcmp(ft_result, memset(ft_result, 0, nmemb * size), nmemb * size) == 0;

    if (is_zero_initialized_std && is_zero_initialized_ft) {
        printf("  ✅ Both standard and custom calloc results are zero-initialized.\n");
    } else {
        printf("  ❌ Allocation results differ or are not zero-initialized!\n");
    }

    // Free allocated memory
    free(std_result);
    free(ft_result);
    printf("\n");
}

int main() {
    // Test 1: Small allocation (5 elements of 4 bytes each)
    printf("Test 1: Small allocation\n");
    run_test(5, 4);

    // Test 2: Large allocation (1000 elements of 8 bytes each)
    printf("Test 2: Large allocation\n");
    run_test(1000, 8);

    // Test 3: Zero elements (should return NULL or a zeroed block)
    printf("Test 3: Zero elements\n");
    run_test(0, 4);

    // Test 4: Zero size (should return NULL or a zeroed block)
    printf("Test 4: Zero size\n");
    run_test(5, 0);

    // Test 5: Edge case with one byte
    printf("Test 5: Edge case with one byte\n");
    run_test(1, 1);

    return 0;
}
