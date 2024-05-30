#include <stdio.h>

void  ft_division(int a, int  *ptr)
{
  *ptr /= a;
}

int  main()
{
  int a = 5;
  int ptr = 10;

  ft_division(a, &ptr);

  printf("%d", ptr);
}
