#include <stdio.h>

int		max(int* tab, unsigned int len)
{
  unsigned int i;
  int max;
  if(len == 0 || tab[0] != '\0')
    return 0;

  i = 0;
  max = tab[0];
  while (len > i)
  {
    if (tab[i] > max)
      max = tab[i];
    i++;
  }
  return (max);
}

int main()
{
  int tab[] = {12, 210, 98, 3, 99};
  unsigned int len = 4;

  printf("%d", max(tab, len));
}