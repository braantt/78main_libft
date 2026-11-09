/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	char   dst[10];
	char   small[3];
	size_t r;

	r = ft_strlcpy(dst, "hello", 10);
	printf("grand buffer: \"%s\" ret=%zu (attendu: \"hello\" ret=5)\n", dst, r);
	r = ft_strlcpy(small, "hello", 3);
	printf("petit buffer: \"%s\" ret=%zu (attendu: \"he\" ret=5)\n", small, r);
	return (0);
}
