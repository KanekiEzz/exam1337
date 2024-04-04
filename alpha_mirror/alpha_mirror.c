#include <unistd.h>

int main(int  ac, char  **av)
{
  int i;
  char  c;

  i = 0;
  if(ac == 2)
  {
    while(av[1][i] != '\0')
    {
      c = av[1][i];
      if(av[1][i] >= 'a' && av[1][i] <= 'z')
      {
        c = 'a' + 'z' - c;
      }
      else  if(av[1][i] >= 'A' && av[1][i] <= 'z')
      {
        c = 'A' + 'Z' - c;
      }
      write(1, &c, 1);
      i++;
    }
  }
  write(1, "\n", 1);
}
