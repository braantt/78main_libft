/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	char *r;

	r = ft_strtrim("  xxhello xx ", " x");
	printf("\"%s\" (attendu: \"hello\")\n", r);
	free(r);
	r = ft_strtrim("abc", "");
	printf("\"%s\" (attendu: \"abc\")\n", r);
	free(r);
	r = ft_strtrim("xxxx", "x");
	printf("\"%s\" (attendu: \"\")\n", r);
	free(r);
	return (0);
}
