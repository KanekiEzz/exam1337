#include <unistd.h>

int main(int  ac, char **av)
{
  if(ac == 2)
  {
    int i = 0;
    int last_word = -1;

    while(av[1][i] != '\0')
    {
      if(av[1][i] != ' ' && av[1][i] != '\t')
      {
        if(last_word == -1 || av[1][i - 1] == ' ' || av[1][i - 1] == '\t' )
        {
            last_word = i;
        }
      }
      i++;
    }

    if(last_word != -1)
    {
      i = last_word;
      while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
      {
        write(1, &av[1][i], 1);
        i++;
      }
    }

  }
  write(1, "\n", 1);
}





//    "FOR PONY" | cat -e
//    ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
