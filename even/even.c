#include <unistd.h>

int main(char ac,  char **av)
{
  int i;

  i = 0;
  if(ac == 2)
  {
    while(av[1][i] != '\0')
    {
      if((i) % 2 == 0)
      {
        write(1, &av[1][i], 1);
      }
      i++;
    }
  }
  write(1, "\n", 1);
}
