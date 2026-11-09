/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

static void del(void *content)
{
	printf("del appelee sur \"%s\"\n", (char *)content);
	free(content);
}

int main(void)
{
	t_list *n;

	n = ft_lstnew(ft_strdup("hello"));
	if (!n)
		return (1);
	ft_lstdelone(n, del);
	printf("(attendu: 1 appel a del, puis aucun crash)\n");
	return (0);
}
