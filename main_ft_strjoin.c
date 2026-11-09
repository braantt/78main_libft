/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	char *r;

	r = ft_strjoin("Hello, ", "world");
	printf("%s (attendu: Hello, world)\n", r);
	free(r);
	r = ft_strjoin("", "abc");
	printf("%s (attendu: abc)\n", r);
	free(r);
	return (0);
}
