#include <stdio.h>

int ft_count_alen(char  *str)
{
  int s = 0;
  while(*str != '\0')
  {
    if(*str == 'a')
    {
      break;
    }
    s++;
    str++;
  }

  return s;
}

int main()
{
  char  l[] = "kneki kuna hidh";

  int length = ft_count_alen(l);

  printf("%d", length);
}
