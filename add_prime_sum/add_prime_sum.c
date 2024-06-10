#include <unistd.h>

int ft_is_prime(int  num)
{
    int j = 2;
    while(j < num)
    {
        if (num % j == 0)
        {
            return 0;
        }
        j++;
    }
    return 1;
}

int main(int ac, char **av)
{
    int c = 0;
    int i = 2;
    if (ac == 2)
    {
        if(av[1][0] >= '0' && av[1][0] <= '9')
        {
            int num = av[1][0] - '0';

            while (num <= i)
            {
                if(ft_is_prime(num) == 1)
                {
                   c += num;
                }
                num--;           
            }
        }
        write(1, &c, 1);
    }
    else
    {
        write(1, "0", 1);
    }
    write(1, "\n", 1);

    return 0;
}