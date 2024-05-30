#include <stdio.h>
#include <stdlib.h>
int	ft_atoi(const char *str)
{
	int resault = 0;
	int sign = 1;

  while(*str == ' ' || (*str >= 9 && *str <= 13))
  {
    str++;
  }

  if(*str == '-' || *str == '+')
  {
    if(*str == '-')
    {
      sign = -1;
    }
    str++;
  }

  while(*str >= '0' && *str <= '9')
	{
    resault = (resault * 10) + (*str - '0'); 
    str++;
	}

	return (sign * resault);
}

int   main(void)
{
	char *a = "  -1234506789ab567";
	char *b = "-6789";
	char *c = "  42";
	char *d = "   +987";
	char *e = "  -123abc";
	char *f = "abc123";
	char *j = "+-42";
	char *h = "++++2147483647";
	char *l = "-2147483648";
	char *g = "  + 123";

	printf("%d\n", ft_atoi(a));
	printf("%d\n", atoi(a));

	printf("%d\n", ft_atoi(b));
	printf("%d\n", atoi(b));
	
  printf("%d\n", ft_atoi(c));
	printf("%d\n", atoi(c));
	
  printf("%d\n", ft_atoi(d));
	printf("%d\n", atoi(d));
	
  printf("%d\n", ft_atoi(e));
	printf("%d\n", atoi(e));
	
  printf("%d\n", ft_atoi(f));
	printf("%d\n", atoi(f));
	
  printf("%d\n", ft_atoi(j));
	printf("%d\n", atoi(j));
	
  printf("%d\n", ft_atoi(h));
	printf("%d\n", atoi(h));
	
  printf("%d\n", ft_atoi(l));
	printf("%d\n", atoi(l));
	
  printf("%d\n", ft_atoi(g));
	printf("%d\n", atoi(g));
}
/*
int main() {
    // Example usage
    const char *str1 = "12345";
    const char *str2 = "-6789";
    const char *str3 = "12345678901234567890"; // Overflow
    const char *str4 = "abc123"; // Invalid input
    const char *str5 = "   123"; // Leading whitespace
    const char *str6 = "  +456"; // Leading whitespace and positive sign
    const char *str7 = "  -789"; // Leading whitespace and negative sign
    const char *str8 = "  +"; // Invalid input with sign only

    printf("Result 1: %d\n", ft_atoi(str1));
    printf("Result 2: %d\n", ft_atoi(str2));
    printf("Result 3: %d\n", ft_atoi(str3));
    printf("Result 4: %d\n", ft_atoi(str4));
    printf("Result 5: %d\n", ft_atoi(str5));
    printf("Result 6: %d\n", ft_atoi(str6));
    printf("Result 7: %d\n", ft_atoi(str7));
    printf("Result 8: %d\n", ft_atoi(str8));

    return 0;
}*/
