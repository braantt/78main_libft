/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	t_list *lst;
	t_list *last;
	t_list *tmp;

	lst = ft_lstnew("a");
	lst->next = ft_lstnew("b");
	lst->next->next = ft_lstnew("c");
	last = ft_lstlast(lst);
	printf("dernier = %s (attendu: c)\n", (char *)last->content);
	printf("liste vide = %p (attendu: (nil))\n", (void *)ft_lstlast(NULL));
	while (lst)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
	return (0);
}
