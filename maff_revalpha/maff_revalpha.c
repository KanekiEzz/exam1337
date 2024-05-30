#include <unistd.h>

int main()
{
  int i;
  int y;

  i = 'z';
  y = 'Y';
  while(i >= 'a' && y >= 'A')
  {
    write(1, &i, 1);
    write(1, &y, 1);
    i -= 2;
    y -= 2;
  }
  write(1, "\n", 1);
}
