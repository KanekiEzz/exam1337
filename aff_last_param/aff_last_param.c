#include <unistd.h>

int main(int ac, char **av)
{
  int i = 0;
  if (ac >= 2)
  {
    ac--;
    while (av[ac][i] != '\0')
    {
      write(1, &av[ac][i], 1);
      i++;
    }
  }
  write(1, "\n", 1);

  return 0;
}