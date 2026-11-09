/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	printf("tolower('A') = %c (attendu: a)\n", ft_tolower('A'));
	printf("tolower('z') = %c (attendu: z)\n", ft_tolower('z'));
	printf("tolower('5') = %c (attendu: 5)\n", ft_tolower('5'));
	return (0);
}
