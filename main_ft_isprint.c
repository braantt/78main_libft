/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	printf("isprint('a')  = %d (attendu: 1)\n", ft_isprint('a'));
	printf("isprint(' ')  = %d (attendu: 1)\n", ft_isprint(' '));
	printf("isprint('\\n') = %d (attendu: 0)\n", ft_isprint('\n'));
	printf("isprint(127)  = %d (attendu: 0)\n", ft_isprint(127));
	return (0);
}
