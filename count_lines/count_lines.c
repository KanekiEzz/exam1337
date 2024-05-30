#include <stdio.h>

int ft_count_lines(char  *str)
{
  int lines = 0;
  while(*str != '\0')
  {
    if(*str == '\n')
    {
      lines++;
    }
    str++;
  }
  return lines;
}

int main()
{
  char k[] = "kan\neki \nkorf\n";

  int len = ft_count_lines(k);

  printf("%d", len);
}
