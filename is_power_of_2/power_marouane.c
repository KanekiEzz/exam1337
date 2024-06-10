#include <stdio.h>

int ft_power(int a, int n)
{
    if(n == 0)
        return 1;

    else
        return a * ft_power(a, n - 1);
}

int        is_power_of_2(unsigned int n)
{
    if(n == 0)
        return 0;
    
    unsigned int i = 0;
    int res;
    while(i <= n)
    {
        res = ft_power(2, i);
        if(res == n)
            return 1;
        if(res > n)
            return 0;
        i++;
    }

    return 0;
}

/*
int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;  // 0 ليس قوة للعدد 2

    return (n & (n - 1)) == 0;
}
*/

int main()
{
    printf("0 : %d\n", is_power_of_2(0));
    printf("1 : %d\n", is_power_of_2(1));
    printf("8 : %d\n", is_power_of_2(8));
    printf("9 : %d\n", is_power_of_2(9));
    return 0; 
}