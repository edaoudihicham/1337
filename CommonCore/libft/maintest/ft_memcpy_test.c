#include <stdio.h>
#include <string.h>  // For standard memcpy

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (n--)
		*d++ = *s++;
	return (dst);
}
void print_memory(const char *label, const void *mem, size_t n) {
    printf("%s: ", label);
    for (size_t i = 0; i < n; i++) {
        printf("%02x ", ((unsigned char *)mem)[i]);
    }
    printf("\n");
}

void run_test(char *dest_std, char *dest_ft, const char *src, size_t n) {
    // Copy using standard memcpy
    memcpy(dest_std, src, n);
    printf("  Standard memcpy result:\n");
    print_memory("  dest_std", dest_std, n);

    // Copy using custom ft_memcpy
    ft_memcpy(dest_ft, src, n);
    printf("  Custom ft_memcpy result:\n");
    print_memory("  dest_ft", dest_ft, n);

    // Compare results
    if (memcmp(dest_std, dest_ft, n) == 0) {
        printf("  ✅ Both functions returned the same result.\n");
    } else {
        printf("  ❌ Results differ!\n");
    }
    printf("\n");
}

int main() {
    // Test 1: Basic memory copy
    printf("Test 1: Basic memory copy\n");
    char src1[] = "Hello, World!";
    char dest1_std[20] = {0};
    char dest1_ft[20] = {0};
    run_test(dest1_std, dest1_ft, src1, 13);

    // Test 2: Copy with smaller size
    printf("Test 2: Copy with smaller size\n");
    char dest2_std[20] = {0};
    char dest2_ft[20] = {0};
    run_test(dest2_std, dest2_ft, src1, 5);

    // Test 3: Copy an empty string (zero bytes)
    printf("Test 3: Copy an empty string (zero bytes)\n");
    char dest3_std[20] = {0};
    char dest3_ft[20] = {0};
    run_test(dest3_std, dest3_ft, src1, 0);

    // Test 4: Copying with different content in source
    printf("Test 4: Copying different content\n");
    char src2[] = "Different content";
    char dest4_std[20] = {0};
    char dest4_ft[20] = {0};
    run_test(dest4_std, dest4_ft, src2, 10);

    return 0;
}
