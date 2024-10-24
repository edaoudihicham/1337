#include <stdio.h>
#include <string.h>  // For standard memset

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *)b;
	while (len)
	{
		*temp++ = (unsigned char)c;
		len--;
	}
	return (b);
}
void print_memory(const char *label, const void *mem, size_t n) {
    printf("%s: ", label);
    for (size_t i = 0; i < n; i++) {
        printf("%02x ", ((unsigned char *)mem)[i]);
    }
    printf("\n");
}

void run_test(char *buffer_std, char *buffer_ft, int c, size_t n) {
    // Fill using standard memset
    memset(buffer_std, c, n);
    printf("  Standard memset result:\n");
    print_memory("  buffer_std", buffer_std, n);

    // Fill using custom ft_memset
    ft_memset(buffer_ft, c, n);
    printf("  Custom ft_memset result:\n");
    print_memory("  buffer_ft", buffer_ft, n);

    // Compare results
    if (memcmp(buffer_std, buffer_ft, n) == 0) {
        printf("  ✅ Both functions returned the same result.\n");
    } else {
        printf("  ❌ Results differ!\n");
    }
    printf("\n");
}

int main() {
    // Test 1: Basic memory set
    printf("Test 1: Basic memory set\n");
    char buffer1_std[20] = {0};
    char buffer1_ft[20] = {0};
    run_test(buffer1_std, buffer1_ft, 'A', 10);

    // Test 2: Fill with zero
    printf("Test 2: Fill with zero\n");
    char buffer2_std[20] = {0};
    char buffer2_ft[20] = {0};
    run_test(buffer2_std, buffer2_ft, 0, 10);

    // Test 3: Fill a single byte
    printf("Test 3: Fill a single byte\n");
    char buffer3_std[20] = {0};
    char buffer3_ft[20] = {0};
    run_test(buffer3_std, buffer3_ft, 'B', 1);

    // Test 4: Fill entire buffer
    printf("Test 4: Fill entire buffer\n");
    char buffer4_std[20] = {0};
    char buffer4_ft[20] = {0};
    run_test(buffer4_std, buffer4_ft, 'C', 20);

    return 0;
}
