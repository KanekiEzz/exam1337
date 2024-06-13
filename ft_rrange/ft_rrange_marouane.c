#include <stdlib.h>
#include <stdio.h>

int my_abs(int n)
{
    if(n < 0)
        return -n;

    return n;
}

int     *ft_rrange(int start, int end)
{
    int length = 0;
    int i = 0;
    int *ptr;
    
    // length = my_abs(end - start) + 1;
    
    if((start <= 0 && end >= 0) || (end <= 0 && start >= 0))
        length = my_abs(start) + my_abs(end) + 1;
    else
        length = my_abs(start) + my_abs(end);

    ptr = malloc(length * sizeof(int));
    

    i = 0;
    int num = 0;
    
    num = end;
    while(i < length)
    {
        ptr[i] = num;

        if(end >= start)
            num--;
        else
            num++;
        i++;
    }

    return ptr;
}