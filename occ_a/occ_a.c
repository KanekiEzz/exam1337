#include <stdio.h>

int ft_number(char  *str)
{
  int count = 0;
  while(*str != '\0')
  {
    if(*str == 'A' || *str == 'a')
    {
      count++;
    }
    str++;
  }
  return count;
}

int main(void)
{
  char *s = "Abieonaiunauianaaaaad";
  printf("%d", ft_number(s));
}
