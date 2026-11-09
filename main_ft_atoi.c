/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	printf("\"42\"        -> %d (attendu: 42)\n", ft_atoi("42"));
	printf("\"  -42abc\"  -> %d (attendu: -42)\n", ft_atoi("  -42abc"));
	printf("\"+7\"        -> %d (attendu: 7)\n", ft_atoi("+7"));
	printf("\"abc\"       -> %d (attendu: 0)\n", ft_atoi("abc"));
	printf("\"2147483647\" -> %d (attendu: 2147483647)\n", ft_atoi("2147483647"));
	printf("\"-2147483648\" -> %d (attendu: -2147483648)\n", ft_atoi("-2147483648"));
	return (0);
}
