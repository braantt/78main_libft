/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	t_list *n;

	n = ft_lstnew("hello");
	if (!n)
		return (1);
	printf("content = %s (attendu: hello)\n", (char *)n->content);
	printf("next = %p (attendu: (nil))\n", (void *)n->next);
	free(n);
	return (0);
}
