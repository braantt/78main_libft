/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	char *src = "hello";
	char *dup;

	dup = ft_strdup(src);
	if (!dup)
		return (1);
	printf("dup = %s (attendu: hello)\n", dup);
	printf("adresses differentes: %d (attendu: 1)\n", dup != src);
	free(dup);
	return (0);
}
