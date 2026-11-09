/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	int *t;
	int i;

	t = ft_calloc(5, sizeof(int));
	if (!t)
		return (1);
	i = 0;
	while (i < 5)
	{
		printf("t[%d] = %d\n", i, t[i]);
		i++;
	}
	printf("(attendu: que des 0)\n");
	free(t);
	return (0);
}
