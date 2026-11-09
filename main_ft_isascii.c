/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	printf("isascii(0)   = %d (attendu: 1)\n", ft_isascii(0));
	printf("isascii(127) = %d (attendu: 1)\n", ft_isascii(127));
	printf("isascii(128) = %d (attendu: 0)\n", ft_isascii(128));
	printf("isascii(-1)  = %d (attendu: 0)\n", ft_isascii(-1));
	return (0);
}
