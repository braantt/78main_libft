/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	printf("toupper('a') = %c (attendu: A)\n", ft_toupper('a'));
	printf("toupper('Z') = %c (attendu: Z)\n", ft_toupper('Z'));
	printf("toupper('5') = %c (attendu: 5)\n", ft_toupper('5'));
	return (0);
}
