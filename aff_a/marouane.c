#include <unistd.h>

int main(int argc, char **argv)
{
        int i;
        int j;
        i = 0;
        while (i < argc)
        {
                j = 0;
                while(*argv[j] != '\0')
                {
                        if(*argv[] == 'a')
                                write(1, 'a', 1);
                        else
                                write(1, '\n', 1);
                        j++;
                }

                i++;
        }

        return 0;
}
