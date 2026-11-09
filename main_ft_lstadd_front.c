/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	t_list *lst;
	t_list *tmp;

	lst = NULL;
	ft_lstadd_front(&lst, ft_lstnew("B"));
	ft_lstadd_front(&lst, ft_lstnew("A"));
	tmp = lst;
	while (tmp)
	{
		printf("%s ", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("(attendu: A B)\n");
	while (lst)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
	return (0);
}
