/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	char *r;

	r = ft_substr("hello world", 6, 5);
	printf("(6,5)   : \"%s\" (attendu: \"world\")\n", r);
	free(r);
	r = ft_substr("hello", 3, 100);
	printf("(3,100) : \"%s\" (attendu: \"lo\")\n", r);
	free(r);
	r = ft_substr("hello", 10, 3);
	printf("(10,3)  : \"%s\" (attendu: \"\")\n", r);
	free(r);
	return (0);
}
