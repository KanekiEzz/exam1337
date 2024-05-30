#include <stdio.h>

int ft_rev_int_tab(int *tab, int size)
{
    int tab2[size];
    int i=0;
    while(size-i-1 >= 0)
    {
        tab2[i] = tab[size-i-1];
        i++;
    }
    while(i-1>=0)
    {
        tab[i-1] = tab2[i-1];
        i--;
    }
}

int main()
{
    int tab[]={13, 5, 89, 3, 67};
    int size;
    int i = 0;
    size = *(&tab + 1) - tab;
    printf("%d\n", size);
    ft_rev_int_tab(tab, size);
    while(i<size)
    {
        printf("%d ",tab[i]);
        i++;
    }
}
 
