/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

int main(void)
{
	t_list *lst;
	t_list *tmp;

	printf("liste vide : %u (attendu: 0)\n", ft_lstsize(NULL));
	lst = ft_lstnew("a");
	lst->next = ft_lstnew("b");
	lst->next->next = ft_lstnew("c");
	printf("3 noeuds   : %u (attendu: 3)\n", ft_lstsize(lst));
	while (lst)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
	return (0);
}
