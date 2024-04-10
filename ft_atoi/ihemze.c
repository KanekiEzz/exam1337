#include <stdio.h>

int     ft_atoi(char *str)
{
    int number;
    int sign;

    number = 0;
    sign = 1;
    while (*str != '\0')
    {
        if (*str >= '0' && *str <= '9')
            number = (*str - '0') + (number * 10);
        if ((*str >= 'A' && *str <= 'Z')||(*str >= 'a' && *str <= 'z'))
            break;
        if (*str == '\0' || *str == '\n')
            continue;
        if ((*str == '-' || *str == '+') && (*(str+1) == '+' || *(str+1) == '-'))
            return 0;
        if (*str =='-')
            sign = -1;
        str++;
    }
    return sign * number;
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
	char *h = "2147483647";
	char *l = "-2147483648";
	char *g = "  + 123";

	printf("%d\n", ft_atoi(a));
	printf("%d\n", ft_atoi(b));
	printf("%d\n", ft_atoi(c));
	printf("%d\n", ft_atoi(d));
	printf("%d\n", ft_atoi(e));
	printf("%d\n", ft_atoi(f));
	printf("%d\n", ft_atoi(j));
	printf("%d\n", ft_atoi(h));
	printf("%d\n", ft_atoi(l));
	printf("%d\n", ft_atoi(g));
}
