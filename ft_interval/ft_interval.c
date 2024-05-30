#include <unistd.h>

int main(int  ac, char **av)
{
  int i = 0;
  if (ac < 2 || av[1] == NULL)
  {
     write(2, "Usage: ./a.out <input_string>\n", 30);
     return 1;
  }
   while (av[1][i] != '\0')
   {
       if(((i + 1) % 3 == 0) && ((i + 1) % 5 == 0))
       {
         write(1, "5", 1);
       }
       else if((i + 1) % 3 == 0)
       {
         write(1, "5", 1);
       }
       else if((i + 1) % 5 == 0)
       {
         write(1, "3", 1);
       }
       else
       write(1, &av[1][i], 1);
     i++;
   }
}
