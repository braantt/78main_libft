/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	printf("strlen(\"hello\") = %zu (attendu: 5)\n", ft_strlen("hello"));
	printf("strlen(\"\")      = %zu (attendu: 0)\n", ft_strlen(""));
	printf("strlen(\"a b\")   = %zu (attendu: 3)\n", ft_strlen("a b"));
	return (0);
}
