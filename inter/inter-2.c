#include <unistd.h>

int bouhdo(char *av, char av1, int nu)
{
	int i = 0;
	while(i < nu)
	{
		if(av[i] == av1)
			return 0;
		i++;
	}
	return 1;
}

int main(int ac, char **av)
{
	int	i, j;
	if(ac == 3)
	{
		i = 0;
		while(av[1][i] != '\0')
		{
			if(bouhdo(av[1], av[1][i], i) == 1)
			{
				j =0;
				while(av[2][j])
				{
					if(av[1][i] == av[2][j])
					{
						write(1, &av[1][i], 1);
						break;
					}
					j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
