#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i, j;

    if (*s1 == '\0')
        return NULL;
    if (*s2 == '\0')
        return (char*)s1;

    i = 0;
    while (s1[i] != '\0')
    {
        j = 0;
        while (s2[j] != '\0')
        {
            if (s1[i] == s2[j])
                return (char *) &s1[i];
            j++;
        }
        i++;
    }
    return(NULL);
}


int main()
{
    const char s1[] = "hello world";
    
    const char s2[] = "dae";
    
    char *result = ft_strpbrk(s1, s2);
    // char *result = strpbrk(s1, s2);
    
    printf("%c \n",*result);
    
    return 0;
}
