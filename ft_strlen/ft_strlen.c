#include <stdio.h>

// int     ft_strlen(char *str)
// {
//   int i;

//   i = 0;
//   while(str[i] != '\0')
//   {
//     i++;
//   }
//   return i;
// }

int     ft_strlen(char *str)
{
  int i;

  i = 0;
  while(str[i++]);
  return (--i);
}

int main()
{
  char *str1 = {"ilyass"};
  char *str2 = "kaneki kun";

  int i1 = ft_strlen(str1);
  int i2 = ft_strlen(str2);


  printf("%s : %d .\n",str1, i1);
  printf("%s : %d .\n",str2, i2);
}
