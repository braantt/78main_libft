/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	printf("(abc,abd,3) = %d (attendu: < 0)\n", ft_memcmp("abc", "abd", 3));
	printf("(abd,abc,3) = %d (attendu: > 0)\n", ft_memcmp("abd", "abc", 3));
	printf("(abc,abd,2) = %d (attendu: 0)\n", ft_memcmp("abc", "abd", 2));
	printf("(\\200,\\100,1) = %d (attendu: > 0)\n", ft_memcmp("\200", "\100", 1));
	return (0);
}
