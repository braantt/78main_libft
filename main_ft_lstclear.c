/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

static void del(void *content)
{
	printf("del \"%s\"\n", (char *)content);
	free(content);
}

int main(void)
{
	t_list *lst;

	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("A")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("B")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("C")));
	ft_lstclear(&lst, del);
	printf("lst = %p (attendu: (nil))\n", (void *)lst);
	return (0);
}
