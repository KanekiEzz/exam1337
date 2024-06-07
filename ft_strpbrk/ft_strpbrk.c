#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i, j;
    char charr;
    if (*s1 == '\0' || *s2 == '\0')
        return 0;
    i = 0;
    while (s1[i] != '\0')
    {
        j = 0;
        while (s2[j] != '\0')
        {
            if (s1[i] == s2[j])
            {
                s[i] = charr;
                return (charr);
            }
            j++;
        }
        i++;
    }
    return()
}


int main() {
    const char *inputString = "hello world";
    
    const char *searchChars = "aeiloud";
    
    const char *result = ft_strpbrk(inputString, searchChars);
    const char *result = strpbrk(inputString, searchChars);
    
    if (result)
    {
        printf("%s \n %c \n", inputString, *result);
    }
    else
    {
        printf("%s  \n", inputString);
    }
    
    return 0;
}