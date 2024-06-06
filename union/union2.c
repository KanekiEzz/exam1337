#include    <unistd.h>

int check1(char *s, char av1, int index)
{
    int i = 0;
    while (i < index)
    {
        if (s[i] == av1)
            return 0;
        i++;
    }
    return 1;
}

int check2(char *av1, char av2, int index)
{
    int i = 0;
    while (i < index)
    {
        if (av1[i] == av2)
            return 0;
        i++;
    }
    return 1;
}

int main (int    ac, char    **av)
{
    int i, j;
    if (ac == 3)
    {
        i   = 0;
        while (av[1][i] != '\0')
        {
            if (check1(av[1], av[1][i], i) == 1)
            {
                write(1, &av[1][i], 1);
            }
            i++;
        }

        i   = 0;
        while (av[2][i] != '\0')
        {
            if (check2(av[1], av[2][i], i) == 1)
            {
                if (check2(av[2], av[2][i], i) == 1)
                write(1, &av[2][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}