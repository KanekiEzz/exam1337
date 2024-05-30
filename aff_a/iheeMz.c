#include <unistd.h>

int main(int argc, char *argv[])
{
    char *arg = argv[1];
    if(argc == 2)
    {
        while(*arg != '\0')
        {
            if(*arg == 'a')
                write(1, "a\n", 2);
            arg++;
        }
    }
    else
        write(1, "a\n", 2);
}
