/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	char *s = "hello";
	char *r;

	r = ft_strchr(s, 'l');
	printf("strchr 'l'  : %s (attendu: llo)\n", r ? r : "(null)");
	r = ft_strchr(s, '\0');
	printf("strchr '\\0' : \"%s\" (attendu: \"\")\n", r ? r : "(null)");
	r = ft_strchr(s, 'z');
	printf("strchr 'z'  : %s (attendu: (null))\n", r ? r : "(null)");
	return (0);
}
