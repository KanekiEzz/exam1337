#include <stdio.h>

int reverse(int x)
{
    int re;
    int rev = 0;
    while(x != 0)
    {
        re = x % 10;
        rev = rev * 10 + re;

        x /= 10;
    }
    return rev;
}

int main()
{
    int x = 234;
    int k = reverse(x);
    
    printf("%d", k);
}