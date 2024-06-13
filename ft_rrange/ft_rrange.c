#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int my_abs(int n)
{
    if(n < 0)
        return (n * -1);
        // return -n;
    return n;
}

int *ft_rrange(int start, int end)
{
  int *range;
  int i;

  int abs = my_abs(end - start );

  range = (int *)malloc( (abs + 1) * sizeof(int));
  if (range == NULL)
    return (NULL);
  // range = (int *)malloc(end * sizeof(int));

  i = 0;
  if (end > start)
  {
    while (end >= start)
    {
      range[i] = end;
      end--;
      i++;
    }
  }
  else if (end < start)
  {
    while (end <= start)
    {
      range[i] = end;
      end++;
      i++;
    }
  }
  return (range);
}

int main()
{
  int *arr = ft_rrange(0, -3);
  int i = 0;
  for (int i = 0; i < 4; i++)
    printf("%d ", arr[i]);

  printf("\n");
  return 0;
}
