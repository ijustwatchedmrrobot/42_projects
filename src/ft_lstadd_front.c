#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list new)
{
	if (!new)
		return (NULL);
	if (*lst == NULL)
		*lst = new;
	else
	{
		new->next = lst;
		*lst = new;
	}
}

/*

new->lst->NULL

check for meanings of pointer and double pointer in linked list struct!!
lst => ???
*lst => node
**lst => content or next

*/