/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	char s1[] = "abcdef";
	char s2[] = "abcdef";
	char s3[10] = {0};

	ft_memmove(s1 + 2, s1, 4);
	printf("vers la droite: %s (attendu: ababcd)\n", s1);
	ft_memmove(s2, s2 + 2, 4);
	printf("vers la gauche: %s (attendu: cdefef)\n", s2);
	ft_memmove(s3, "hello", 6);
	printf("sans chevauchement: %s (attendu: hello)\n", s3);
	return (0);
}
