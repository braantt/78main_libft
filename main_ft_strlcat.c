/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	char   a[10] = "abc";
	char   b[10] = "abc";
	size_t r;

	r = ft_strlcat(a, "def", 10);
	printf("assez de place: \"%s\" ret=%zu (attendu: \"abcdef\" ret=6)\n", a, r);
	r = ft_strlcat(b, "def", 5);
	printf("tronque: \"%s\" ret=%zu (attendu: \"abcd\" ret=6)\n", b, r);
	return (0);
}
