#include    <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i, j;

    if(*s == '\0'|| *reject == '\0')
        return (0);

    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while (reject[j] != '\0')
        {
            if(reject[j] == s[i])
                return i;
            j++;
        }
        i++;
    }
    return i;
}


int main() {
    char s[] = "Hello, world!";
    char reject[] = "k";

    size_t length = ft_strcspn(s, reject);

    printf("%zu\n",  length);

    return 0;
}
