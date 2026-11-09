/* #include <stdio.h> */
#include "libft.h"

int	printf(const char *format, ...);

static void *add_bang(void *content)
{
	return (ft_strjoin((char *)content, "!"));
}

static void del(void *content)
{
	free(content);
}

static void no_del(void *content)
{
	(void)content;
}

int main(void)
{
	t_list *lst;
	t_list *new;
	t_list *tmp;

	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew("a"));
	ft_lstadd_back(&lst, ft_lstnew("b"));
	ft_lstadd_back(&lst, ft_lstnew("c"));
	new = ft_lstmap(lst, add_bang, del);
	tmp = new;
	while (tmp)
	{
		printf("%s ", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("(attendu: a! b! c!)\n");
	tmp = lst;
	while (tmp)
	{
		printf("%s ", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("(originale inchangee: a b c)\n");
	ft_lstclear(&new, del);
	ft_lstclear(&lst, no_del);
	return (0);
}
