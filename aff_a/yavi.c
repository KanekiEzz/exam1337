#include <unistd.h>


int main(int argc, char *argv[])
{
    int index;
    index = 0;

    if (argc != 2)
    {
        write(1,"a",1);
    }

    else if (argc == 2)
    {
        while (argv[1][index] != '\0')
        {
            if(argv[1][index] == 'a')
            {
                write(1,"a",1);
                break;
            }
            index++;
        }
        
    }

    write(1,"\n",1);
}
