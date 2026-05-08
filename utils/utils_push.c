#include "push_swap.h"

void	ft_push(t_stack **to, t_stack **from)
{
	t_stack	*tmp;

	if (!to || !from || !*from)
		return ;
	tmp = *from;
	*from = (*from)->next;
	if (*from)
		(*from)->prev = NULL;
	tmp->next = *to;
	if (*to)
		(*to)->prev = tmp;
	*to = tmp;
	tmp->prev = NULL;
}

void	ft_pa(t_stack **a, t_stack **b)
{
	ft_push (a, b);
	write (1, "pa\n", 3);
}

void	ft_pb(t_stack **a, t_stack **b)
{
	ft_push (b, a);
	write (1, "pb\n", 3);
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_stack *node1 = ft_lstnew (1);
// 	t_stack *node2 = ft_lstnew (2);
// 	t_stack *node3 = ft_lstnew (3);
// 	t_stack	**a = &node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node2->prev = node1;
// 	node3->prev = node2;

// 	t_stack *node4 = ft_lstnew (4);
// 	t_stack *node5 = ft_lstnew (5);
// 	t_stack *node6 = ft_lstnew (6);
// 	t_stack	**b = &node4;
// 	node4->next = node5;
// 	node5->next = node6;
// 	node5->prev = node4;
// 	node6->prev = node5;

	
// 	printf("%d, %d, %d\n", (*a)->value, (*a)->next->value, (*a)->next->next->value);
// 	printf("%d, %d, %d\n", (*b)->value, (*b)->next->value, (*b)->next->next->value);
// 	ft_pa (&node1, &node4);
// 	printf("%d, %d, %d, %d\n", (*a)->value, (*a)->next->value, (*a)->next->next->value, (*a)->next->next->next->value);
// 	printf("%d, %d\n", (*b)->value, (*b)->next->value);
// 	ft_pb (&node1, &node4);
// 	printf("%d, %d, %d\n", (*a)->value, (*a)->next->value, (*a)->next->next->value);
// 	printf("%d, %d, %d\n", (*b)->value, (*b)->next->value, (*b)->next->next->value);
// }