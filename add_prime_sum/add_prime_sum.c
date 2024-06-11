#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void mini_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "0", 1);
        return ;
	}
	if (nb >= 10)
	{
		mini_putnbr(nb / 10);
		mini_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int ft_is_prime(int num)
{
    if (num <= 1)
        return 0;
    int j = 2;
    while (j < num)
    {
        if (num % j == 0)
        {
            return 0;
        }
        j++;
    }
    return 1;
}

int mini_atoi(char *str)
{
    int num = 0;
    while (*str >= '0' && *str <= '9')
    {
        num = (num * 10) + (*str - '0');
        str++;
    }
    return (num);
}

int main(int ac, char **av)
{
    int c = 0;
    int i = 2;
    if (ac == 2)
    {
        if (av[1][0] >= '0' && av[1][0] <= '9')
        {
            int num = mini_atoi(av[1]);
            while (num >= i)
            {
                if (ft_is_prime(num) == 1)
                {
                    c += num;
                }
                num--;
            }
        }
        mini_putnbr(c);
    }
    else
    {
        write(1, "0", 1);
    }
    write(1, "\n", 1);

    return 0;
}