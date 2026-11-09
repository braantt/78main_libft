/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	printf("isalpha('a') = %d (attendu: 1)\n", ft_isalpha('a'));
	printf("isalpha('Z') = %d (attendu: 1)\n", ft_isalpha('Z'));
	printf("isalpha('5') = %d (attendu: 0)\n", ft_isalpha('5'));
	printf("isalpha(' ') = %d (attendu: 0)\n", ft_isalpha(' '));
	return (0);
}
