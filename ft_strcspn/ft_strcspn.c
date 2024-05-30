#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t l;

	i = 0;
	while (s[i] != '\0')
	{
		l = 0;
		while (reject[l] != '\0')
		{
			if (s[i] == reject[l])
				return (i);
			l++;
		}
		i++;
	}
	return (i);
}
