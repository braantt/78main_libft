/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	char *r;

	r = ft_strnstr("hello world", "world", 11);
	printf("trouve   : %s (attendu: world)\n", r ? r : "(null)");
	r = ft_strnstr("hello world", "world", 8);
	printf("len court: %s (attendu: (null))\n", r ? r : "(null)");
	r = ft_strnstr("hello world", "", 5);
	printf("needle vide: %s (attendu: hello world)\n", r ? r : "(null)");
	r = ft_strnstr("hello", "xyz", 5);
	printf("absent   : %s (attendu: (null))\n", r ? r : "(null)");
	return (0);
}
