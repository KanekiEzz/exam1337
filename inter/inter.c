#include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

int		check_doubles(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void  inter(char *str1, char *str2)
{
    int i = 0;
    while(str1[i] != '\0')
    {
      int j = 0;
      while(str2[j] != '\0')
      {
        if(str1[i] == str2[j])
        {
          if(check_doubles(str1, str1[i], i) == 1)
          {
            ft_putchar(str1[i]);
            break;
          }
        }
        j++;
      }
      i++;
    }
}

int main(int  ac, char **av)
{
  if(ac == 3)
  {
    inter(av[1], av[2]);
  }
  ft_putchar('\n');
}

/*
int main(int  ac, char **av)
{
  int i,j;

  i = 0;
  if(ac == 3)
  {
    while(av[1][i] != '\0')
    {
      j = 0;
      while(av[2][j] != '\0')
      {
        // ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd => df6ewg4
        // "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" => padinto
        // "rien" "cette phrase ne cache rien" => rien
        if(av[1][i] == av[2][j]) 
        {
          if(check_doubles(av[1], av[1][i], i) == 1)
          {
            ft_putchar(av[1][i]);
            break;
          }
        }
        j++;
      }
      i++;
    }
  }
  ft_putchar('\n');
}
*/
