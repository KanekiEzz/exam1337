#include <stdio.h>

void  ft_plural(int a, int  *ptr)
{
  *ptr += a;
}

int main(void)
{
  int a = 5;
  int ptr = 12;

  ft_plural(a, &ptr);

  printf("%d", ptr);
}
