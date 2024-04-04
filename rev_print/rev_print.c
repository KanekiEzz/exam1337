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
  int i = 0;

 /* while(str[i] != '\0')
  {
    write(1, &str[i], 1);
    i++;
  }
 */

  int j = ft_strlen(str);

  printf("%d", j);

  while (j >= 0)
  {
    write(1, &str[j], 1);
    j--;
  }
}

int main(int argc, char **argv)
{
  if(argc == 2)
  {
    if(argv[1][0] != '\0')
      ft_rev_print(argv[1]);
    write(1, "\n", 1);
  }
}
