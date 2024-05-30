#include <unistd.h>

int ft_strlen(char *str)
{
  int i = 0;
  while(str[i] != '\0')
  {
    i++;
  }
  return i;
}

int main(int  ac, char  **av)
{
  int i = 0;
  int len = ft_strlen(av[1]);

  if(ac == 2)
  {
    while(i < len)
    {
      if(av[1][i] >= 'a' && av[1][i] <= 'z')
      {
        write(1, &av[1][i], 1);
        if(i < len - 1)
          write(1, "   ", 3);
      }
      i++;
    }
  }
  write(1, "\n",1);
}
