/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

static char alt(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main(void)
{
	char *r;

	r = ft_strmapi("hello", alt);
	printf("%s (attendu: HeLlO)\n", r);
	free(r);
	return (0);
}
