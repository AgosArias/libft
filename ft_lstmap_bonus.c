#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	void    *content_tmp;
    t_list  *lst_out;
    t_list  *node;

    lst_out = NULL;
    while (lst)
    {
        content_tmp = f(lst->content);
        if(content_tmp && !lst_out)
            lst_out = ft_lstnew(content_tmp);
        else if (content_tmp)
            ft_lstadd_front(&lst_out, content_tmp);
        node = lst;
        lst = lst->next;
        del(node);
    }
    return(lst_out);
}

/*Itera la lista ’lst’ y aplica la función ’f’ al
contenido de cada nodo. Crea una lista resultante
de la aplicación correcta y sucesiva de la función
’f’ sobre cada nodo. La función ’del’ se utiliza
para eliminar el contenido de un nodo, si hace
falta*/