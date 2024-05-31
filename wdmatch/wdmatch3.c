#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        int j = 0;
        while (av[1][i] != '\0')
        {
            while (av[2][j] != '\0' && av[2][j] != av[1][i])
                j++;
            if (av[2][j] == '\0')
            {
                write(1, "\n", 1);
                return 0;
            }
            i++;
            j++;
        }
        write(1, av[1], ft_strlen(av[1]));
        write(1, "\n", 1);
    }
    else
    {
        write(1, "\n", 1);
    }
    return 0;
}
