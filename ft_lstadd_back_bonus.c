#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *node;
	
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	
	node = *lst;
    while (node->next != NULL)
		node = node->next;
    node->next = new;
}