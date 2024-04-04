#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
  int i = 0;
  while(str[i] != '\0')
  {
    i++;
  }
  return i;
}

 char *ft_rev_print (char *str)
{
  int j = ft_strlen(str) - 1;

  while (j >= 0)
  {
    write(1, &str[j], 1);
    j--;
  }
  return str;
}

int main(int argc, char **argv)
{
  if(argc == 2 && argv[1][0] != '\0')
  {
    if(argv[1][0] != '\0')
      ft_rev_print(argv[1]);
  }
  write(1, "\n", 1);
}
