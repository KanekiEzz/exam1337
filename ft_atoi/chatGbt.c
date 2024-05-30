#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int ft_atoi(const char *str) {
    int result = 0;
    int sign = 1;
    bool digit_found = false;

    // Skip whitespace
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;

    // Handle optional sign
    if (*str == '-' || *str == '+') {
        if (*str == '-')
            sign = -1;
        str++;
    }

    // Process digits
    while (*str >= '0' && *str <= '9') {
        digit_found = true;
        int digit = *str - '0';
        // Check for overflow before adding the digit
        if (result > (INT_MAX - digit) / 10) {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
        result = result * 10 + digit;
        str++;
    }

    // Check if no valid digits were found
    if (!digit_found)
        return 0;

    return result * sign;
}


int main() {
    // Example usage
    const char *str1 = "12345";
    const char *str2 = "-6789";
    const char *str3 = "12345678901234567890"; // Overflow
    const char *str4 = "abc123"; // Invalid input
    const char *str5 = "   123"; // Leading whitespace
    const char *str6 = "  +456"; // Leading whitespace and positive sign
    const char *str7 = "  -789"; // Leading whitespace and negative sign
    const char *str8 = "  +"; // Invalid input with sign only

    printf("Result 1: %d\n", ft_atoi(str1));
    printf("Result 2: %d\n", ft_atoi(str2));
    printf("Result 3: %d\n", ft_atoi(str3));
    printf("Result 4: %d\n", ft_atoi(str4));
    printf("Result 5: %d\n", ft_atoi(str5));
    printf("Result 6: %d\n", ft_atoi(str6));
    printf("Result 7: %d\n", ft_atoi(str7));
    printf("Result 8: %d\n", ft_atoi(str8));

    return 0;
}
