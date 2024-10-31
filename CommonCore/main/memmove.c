#include <stdio.h>
#include <string.h>  // For standard memmove

#include "../ft_memmove.c"


void print_memory(const char *label, const void *mem, size_t n) {
    printf("%s: ", label);
    for (size_t i = 0; i < n; i++) {
        printf("%02x ", ((unsigned char *)mem)[i]);
    }
    printf("\n");
}

void run_test(char *dest_std, char *dest_ft, const char *src, size_t n) {
    // Copy using standard memmove
    memmove(dest_std, src, n);
    printf("  Standard memmove result:\n");
    print_memory("  dest_std", dest_std, n);

    // Copy using custom ft_memmove
    ft_memmove(dest_ft, src, n);
    printf("  Custom ft_memmove result:\n");
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
    // Test 1: Non-overlapping regions
    printf("Test 1: Non-overlapping regions\n");
    char buffer1_std[20] = "Hello, World!";
    char buffer1_ft[20] = "Hello, World!";
    char src1[] = "Greetings";
    run_test(buffer1_std, buffer1_ft, src1, 9);

    // Test 2: Overlapping regions (dest before src)
    printf("Test 2: Overlapping regions (dest before src)\n");
    char buffer2_std[20] = "Hello, World!";
    char buffer2_ft[20] = "Hello, World!";
    run_test(buffer2_std, buffer2_ft, buffer2_std + 7, 6);  // "World!" copied to the beginning

    // Test 3: Overlapping regions (src before dest)
    printf("Test 3: Overlapping regions (src before dest)\n");
    char buffer3_std[20] = "Hello, World!";
    char buffer3_ft[20] = "Hello, World!";
    run_test(buffer3_std + 7, buffer3_ft + 7, buffer3_std, 6);  // "Hello," copied to "World!"

    // Test 4: Full buffer copy
    printf("Test 4: Full buffer copy\n");
    char buffer4_std[20] = "Test String";
    char buffer4_ft[20] = "Test String";
    run_test(buffer4_std, buffer4_ft, buffer4_std, 11);

    // Test 5: Zero-length copy
    printf("Test 5: Zero-length copy\n");
    char buffer5_std[20] = "Unchanged";
    char buffer5_ft[20] = "Unchanged";
    run_test(buffer5_std, buffer5_ft, buffer5_std + 4, 0);

    return 0;
}
