/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

static void print(void *content)
{
	printf("%s ", (char *)content);
}

int main(void)
{
	t_list *lst;
	t_list *tmp;

	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew("A"));
	ft_lstadd_back(&lst, ft_lstnew("B"));
	ft_lstadd_back(&lst, ft_lstnew("C"));
	ft_lstiter(lst, print);
	printf("(attendu: A B C)\n");
	while (lst)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
	return (0);
}
