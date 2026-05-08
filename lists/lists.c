#include "push_swap.h"

t_stack	*ft_lstnew(int value)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	new->value = value;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

// void	ft_lstadd_front(t_stack **lst, t_stack *new)
// {
// 	new->next = *lst;
// 	(*lst)->prev = new;
// 	*lst = new;
// }

// void	ft_lstdel_front(t_stack **lst)
// {
// 	t_stack	**new_lst;

// 	*new_lst = (*lst)->next;
// 	free (*lst); 
// }