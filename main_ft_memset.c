/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	char buf[6] = "abcde";

	ft_memset(buf, 'x', 3);
	printf("memset: %s (attendu: xxxde)\n", buf);
	ft_memset(buf, 'z', 0);
	printf("memset len 0: %s (attendu: xxxde)\n", buf);
	return (0);
}
