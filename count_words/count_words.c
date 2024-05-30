#include <stdio.h>

int ft_count_words(char  *str)
{
  int words = 1;
  while(*str != '\0')
  {
    if(*str == ' ')
    {
      words++;
    }
    str++;
  }
  return words;
}

int main()
{
  char k[] = "kaneki korf";

  int len = ft_count_words(k);

  printf("%d", len);
}
