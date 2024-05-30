#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
    	while (str[i++]);
    	return (--i);
 }

char	*ft_strcpy(char *src, char* dest)
{
    int i = 0;
    int j = 0;
    while (src[i])
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    
    dest[i] = '\0';
    return dest;
}

char    *ft_strdup(char *src)
{
	if(!src)
		return NULL;
	char *p;

	int len = ft_strlen(src);
	p = (char *)malloc((len + 1) * sizeof(char));
	
	if(!p)
		return NULL;
	ft_strcpy(src, p);

	return (p);
}

int main()
{
	char sr[] = "kaneki";
	char *rs = ft_strdup(sr);
	printf("%s\n", rs);
	free (rs);
}
