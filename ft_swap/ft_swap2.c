#include <unistd.h>

void    ft_swap(int *a, int *b)
{
  int   swap;

  swap = *a;
  *a = *b;
  *b = swap;
}

int main()
{
  int a = '6';
  int b = '3';

  write(1, "a: ", 3);
  write(1, &a, 1);

  write(1, "\n", 1);

  write(1, "b: ", 3);
  write(1, &b, 1);

  write(1, "\n", 1);

  write(1,"/***********************************************************/", 61);
  
  write(1, "\n", 1);

  ft_swap(&a, &b);
  
  write(1, "a: ", 3);
  write(1, &a, 1);
 
  write(1, "\n", 1);
 
  write(1, "b: ", 3);
  write(1, &b, 1);

  write(1, "\n", 1);
}
