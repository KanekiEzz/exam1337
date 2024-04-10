#include <stdio.h>

void  ft_beating(int  a, int  *ptr)
{
  *ptr *= a;
  // *ptr = *ptr * a;
}

int main()
{
  int a = 5;
  int ptr = 5;

  ft_beating(a, &ptr);

  printf("%d", ptr);
}
