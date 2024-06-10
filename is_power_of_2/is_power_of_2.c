#include    <stdio.h>

int is_power_of_2(unsigned int n) {
    if (n == 0)
        return 0;
    return (n & (n - 1)) == 0;
}

int main ()
{
    printf("%d\n", is_power_of_2(1));
    printf("%d\n", is_power_of_2(2));
    printf("%d\n", is_power_of_2(3));
    printf("%d\n", is_power_of_2(4));
    printf("%d\n", is_power_of_2(5));
    printf("%d\n", is_power_of_2(8));
}