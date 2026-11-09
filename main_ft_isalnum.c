/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	printf("isalnum('a') = %d (attendu: 1)\n", ft_isalnum('a'));
	printf("isalnum('7') = %d (attendu: 1)\n", ft_isalnum('7'));
	printf("isalnum('_') = %d (attendu: 0)\n", ft_isalnum('_'));
	printf("isalnum(' ') = %d (attendu: 0)\n", ft_isalnum(' '));
	return (0);
}
