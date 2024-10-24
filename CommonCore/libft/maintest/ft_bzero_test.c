#include <stdio.h>
#include <string.h> // for memset

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (n)
	{
		*temp++ = 0;
		n--;
	}
}


// Function to print memory for verification
void print_buffer(unsigned char *buffer, size_t size) {
    printf("Buffer: ");
    for (size_t i = 0; i < size; i++) {
        printf("%02x ", buffer[i]);
    }
    printf("\n");
}

void run_test(unsigned char *buffer, size_t size, size_t n) {
    // Create copies of the original buffer for testing
    unsigned char buffer_std[size];
    unsigned char buffer_ft[size];

    // Initialize both buffers to the same values
    memcpy(buffer_std, buffer, size);
    memcpy(buffer_ft, buffer, size);

    // Zero out with standard memset (to simulate bzero behavior)
    memset(buffer_std, 0, n);

    // Zero out with custom ft_bzero
    ft_bzero(buffer_ft, n);

    // Display results
    printf("Testing with buffer of size %zu and n = %zu:\n", size, n);
    printf("  Before:\n");
    print_buffer(buffer, size);
    printf("  Standard (using memset):\n");
    print_buffer(buffer_std, size);
    printf("  Custom ft_bzero:\n");
    print_buffer(buffer_ft, size);

    // Compare results
    if (memcmp(buffer_std, buffer_ft, size) == 0) {
        printf("  ✅ Both functions returned the same result.\n");
    } else {
        printf("  ❌ Results differ!\n");
    }
    printf("\n");
}

int main() {
    // Test 1: Zeroing out part of a buffer
    unsigned char buffer1[] = {0x41, 0x42, 0x43, 0x44, 0x45};
    printf("Test 1: Zeroing out part of the buffer\n");
    run_test(buffer1, sizeof(buffer1), 3); // Zero out first 3 bytes

    // Test 2: Zeroing out entire buffer
    unsigned char buffer2[] = {0x41, 0x42, 0x43, 0x44, 0x45};
    printf("Test 2: Zeroing out entire buffer\n");
    run_test(buffer2, sizeof(buffer2), 5); // Zero out all 5 bytes

    // Test 3: Zeroing with n = 0 (no change should happen)
    unsigned char buffer3[] = {0x41, 0x42, 0x43, 0x44, 0x45};
    printf("Test 3: Zeroing with n = 0 (no change)\n");
    run_test(buffer3, sizeof(buffer3), 0); // n = 0, nothing should change

    // Test 4: Empty buffer (no bytes to zero)
    unsigned char buffer4[] = {};
    printf("Test 4: Empty buffer\n");
    run_test(buffer4, sizeof(buffer4), 0);

    return 0;
}
