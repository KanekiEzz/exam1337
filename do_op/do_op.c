#include <stdio.h>

int	atoi(char *str)
{
	int	number;
	int	sign;

	number = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number = number * 10 + (*str - 48);
		str++;
	}
	return (sign * number);
}

int main(int  argc, char **argv)
{
  int i;

  i = 0;
  if(argc == 4)
  {
    if (argv[2][0] == '+')
    {
      printf("%d",(atoi(argv[1]) + atoi(argv[3])));
    }
    if (argv[2][0] == '-')
    {
      printf("%d",(atoi(argv[1]) - atoi(argv[3])));
    }
    if (argv[2][0] == '*')
    {
      printf("%d",(atoi(argv[1]) * atoi(argv[3])));
    }
    if (argv[2][0] == '/')
    {
      printf("%d",(atoi(argv[1]) / atoi(argv[3])));
    }
    if (argv[2][0] == '%')
    {
      printf("%d",(atoi(argv[1]) / atoi(argv[3])));
    }
  }
  printf("\n");
}
