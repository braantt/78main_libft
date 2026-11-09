/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	char *s = "hello";
	char *r;

	r = ft_strrchr(s, 'l');
	printf("strrchr 'l'  : %s (attendu: lo)\n", r ? r : "(null)");
	r = ft_strrchr(s, '\0');
	printf("strrchr '\\0' : \"%s\" (attendu: \"\")\n", r ? r : "(null)");
	r = ft_strrchr(s, 'z');
	printf("strrchr 'z'  : %s (attendu: (null))\n", r ? r : "(null)");
	return (0);
}
