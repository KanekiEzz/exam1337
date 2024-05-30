#include <unistd.h>

int main(int  ac, char  **av)
{
  int i = 'A';
  int y = 'b';

  while(i <= 'Z' && y <= 'z')
  {
    write(1, &i, 1);
    write(1, &y, 1);
    i += 2;
    y += 2;
  }
  write(1, "\n", 1);
}
