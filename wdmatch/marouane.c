#include <unistd.h>

int check_arg_l7arf(char *str, char c)
{
    static int i = 0;
    while(str[i])
    {
        if(str[i] == c)
            return 1;

        i++;
    }
    return 0;
}

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int i = 0;
        while(argv[1][i])
        {
            if(!check_arg_l7arf(argv[2], argv[1][i]))
            {
                write(1, "\n", 1);
                return 0;
            }
            i++;
        }
        i = 0;
        while(argv[1][i])
        {
            write(1, &argv[1][i], 1);

            i++;
        }
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}