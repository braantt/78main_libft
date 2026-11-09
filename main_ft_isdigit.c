/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	printf("isdigit('0') = %d (attendu: 1)\n", ft_isdigit('0'));
	printf("isdigit('9') = %d (attendu: 1)\n", ft_isdigit('9'));
	printf("isdigit('a') = %d (attendu: 0)\n", ft_isdigit('a'));
	printf("isdigit('/') = %d (attendu: 0)\n", ft_isdigit('/'));
	return (0);
}
