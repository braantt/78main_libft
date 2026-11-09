/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	char *r;

	r = ft_itoa(0);
	printf("0           -> %s\n", r);
	free(r);
	r = ft_itoa(42);
	printf("42          -> %s\n", r);
	free(r);
	r = ft_itoa(-42);
	printf("-42         -> %s\n", r);
	free(r);
	r = ft_itoa(2147483647);
	printf("INT_MAX     -> %s\n", r);
	free(r);
	r = ft_itoa(-2147483647 - 1);
	printf("INT_MIN     -> %s\n", r);
	free(r);
	return (0);
}
