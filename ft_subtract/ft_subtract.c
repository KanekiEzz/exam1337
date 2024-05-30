#include <stdio.h>

void    ft_subtract(int a, int *ptr)
{
  *ptr = *ptr - a;
}

int main()
{
  int i = 8;
  int k = 5;
  ft_subtract(i,&k);

  printf("%d", k);
}
