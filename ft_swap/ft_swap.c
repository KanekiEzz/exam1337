#include <stdio.h>

void    ft_swap(int *a, int *b)
{
  int swap;

  swap = *a;
  *a = *b;
  *b = swap;
}

int main()
{
  int a = 5;
  int b = 6;

  printf("a: %d \nb: %d \n", a, b);

  ft_swap(&a,&b);

  printf("a: %d \nb: %d \n", a, b);


}
