#include    <stdio.h>
#include    <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int  i,   j;
    size_t  k;

    if (!*s || !*accept)
        return 0;

    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while(accept[j] != '\0')
        {   
            if (accept[j] == s[i])
                k++;
            j++;
        }
        if (k == 0)
            break;
        i++;
    }
    return (k);
}

int main()
{
    const char s[] = "labcde12345";
    const char accept[] = "abcde";

    size_t result = ft_strspn(s, accept);
    // size_t result = strspn(s, accept);

    printf("%ld\n", result);
}