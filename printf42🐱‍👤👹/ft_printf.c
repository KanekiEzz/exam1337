#include "ft_printf.h"

static int	ft_print_format(char format, va_list ap)
{
	int	count;

	return (count);
}

int	ft_printf(const char *format, ...)
{
	int	count;

	return (count);
}


int main()
{
    int n = 1337;
    char *str = "Hello, kaneki!";
    void *ptr = (void *)0x12345678;

    ft_printf("Printing an integer: %d\n", n);
    ft_printf("Printing a string: %s\n", str);
    ft_printf("Printing a pointer: %p\n", ptr);

    return 0;
}
