#include "../ft_atoi.c"


#include <stdio.h>
#include <stdlib.h>  

void run_test(const char *str) {
    printf("Testing string: \"%s\"\n", str);

    // Using standard atoi
    int std_result = atoi(str);
    printf("  Standard atoi result: %d\n", std_result);

    // Using custom ft_atoi
    int ft_result = ft_atoi(str);
    printf("  Custom ft_atoi result: %d\n", ft_result);

    // Compare results
    if (std_result == ft_result) {
        printf("  ✅ Both functions returned the same result.\n");
    } else {
        printf("  ❌ Results differ!\n");
    }
    printf("\n");
}

int main() {
    // Test 1: Simple positive number
    printf("Test 1: Simple positive number\n");
    run_test("123");

    // Test 2: Simple negative number
    printf("Test 2: Simple negative number\n");
    run_test("-456");

    // Test 3: Number with leading whitespace
    printf("Test 3: Number with leading whitespace\n");
    run_test("   789");

    // Test 4: Number with leading and trailing whitespace
    printf("Test 4: Number with leading and trailing whitespace\n");
    run_test("   42   ");

    // Test 5: Number with a plus sign
    printf("Test 5: Number with a plus sign\n");
    run_test("+314");

    // Test 6: Non-numeric characters at the end
    printf("Test 6: Non-numeric characters at the end\n");
    run_test("987abc");

    // Test 7: Only non-numeric characters
    printf("Test 7: Only non-numeric characters\n");
    run_test("abc123");

    // Test 8: Empty string (should return 0)
    printf("Test 8: Empty string\n");
    run_test("");

    // Test 9: Long number that may exceed int range
    printf("Test 9: Long number that may exceed int range\n");
    run_test("2147483648");  // Exceeds INT_MAX in 32-bit systems

    // Test 10: Large negative number exceeding int range
    printf("Test 10: Large negative number exceeding int range\n");
    run_test("-2147483649"); // Less than INT_MIN in 32-bit systems

    return 0;
}
