#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	temp;
	
	if (!lst)
		return (NULL)
	size = 0;
	temp = lst;
	while (!temp)
	{
		temp = temp->next;
		size++;		
	}
	return (size);
}