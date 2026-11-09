/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	printf("(abc,abd,2) = %d (attendu: 0)\n", ft_strncmp("abc", "abd", 2));
	printf("(abc,abd,3) = %d (attendu: < 0)\n", ft_strncmp("abc", "abd", 3));
	printf("(abd,abc,3) = %d (attendu: > 0)\n", ft_strncmp("abd", "abc", 3));
	printf("(abc,abc,3) = %d (attendu: 0)\n", ft_strncmp("abc", "abc", 3));
	printf("(abc,xyz,0) = %d (attendu: 0)\n", ft_strncmp("abc", "xyz", 0));
	return (0);
}
