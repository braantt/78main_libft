/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	char *s = "hello";
	char *r;

	r = ft_memchr(s, 'l', 5);
	printf("memchr 'l' : index %ld (attendu: 2)\n", r ? (long)(r - s) : -1L);
	r = ft_memchr(s, 'o', 4);
	printf("memchr 'o' sur 4 octets : %s (attendu: (null))\n", r ? r : "(null)");
	r = ft_memchr(s, 'z', 5);
	printf("memchr 'z' : %s (attendu: (null))\n", r ? r : "(null)");
	return (0);
}
