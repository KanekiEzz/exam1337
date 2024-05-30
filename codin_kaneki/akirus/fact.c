#include <stdio.h>

int factorial(int n)
{
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}

int main()
{
    int num = 5;
    printf("%d", factorial(num));
}



// n > 0 ? (n * factorial (n -1 )) :  0;
// int main()
// {
//     int num = 5;
//     int fact = 1;
//     int i = 1;

//     while(i <= num)
//     {
//         fact = fact * i;
//         i++;
//     }

//     printf("%d", fact);
// }