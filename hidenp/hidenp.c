#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
  int i = 0;
  while (str[i++]);
  return --i;
}

int main(int ac, char **av)
{
  int i, l;
  int ser = 0;
  if (ac == 3)
  {
    i = 0;
    l = 0;
    while (av[1][i] != '\0')
    {
      while (av[2][l] != '\0')
      {
        if (av[1][i] == av[2][l])
        {
          ser++;
          break;
        }
        l++;
      }
      i++;
    }
    // check code
    int size_av1 = ft_strlen(av[1]);
    // printf("%d \n", size_av1);
    // printf("%d \n", ser);
    if (ser == size_av1)
      write(1, "1", 1);
    else if (ser != size_av1)
      write(1, "0", 1);
  }
  write(1, "\n", 1);
  return 0;
}