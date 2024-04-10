#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
  if(*s1 == '\0' && *s2 == '\0')
  {
    return 0;
  }
  int i = 0;
  int j = 0;
  while(s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
  {
    i++;
    j++;
  }
  return (s1[i] - s2[j]);
}

int   main()
{
  char *s1 = "a";
  char *s2 = "b";

  int i = ft_strcmp(s1, s2);

  printf("%d", i);
}
