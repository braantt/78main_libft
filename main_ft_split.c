/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

static void show(char **t)
{
	int i;

	i = 0;
	while (t[i])
	{
		printf("[%d] \"%s\"\n", i, t[i]);
		free(t[i]);
		i++;
	}
	free(t);
}

int main(void)
{
	char **t;

	t = ft_split("a,b,,c", ',');
	printf("split \"a,b,,c\" (attendu: a, b, c)\n");
	show(t);
	t = ft_split("  hello   world  ", ' ');
	printf("split \"  hello   world  \" (attendu: hello, world)\n");
	show(t);
	t = ft_split("", ' ');
	printf("split \"\" (attendu: rien)\n");
	show(t);
	return (0);
}
