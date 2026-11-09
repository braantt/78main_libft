/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

static void alt(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c -= 32;
}

int main(void)
{
	char s[] = "hello";

	ft_striteri(s, alt);
	printf("%s (attendu: HeLlO)\n", s);
	return (0);
}
