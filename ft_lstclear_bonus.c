#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *node;

    while (*lst)
    {
        node = *lst;
        *lst = (*lst)->next;
        del(node);
    }
}