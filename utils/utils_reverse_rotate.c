#include "push_swap.h"

void	ft_reverse_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;
	t_stack	*tmp;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = first;
	while (last->next)
		last = last->next;
	*stack = last;
	tmp = last->prev;
	last->next = first;
	first->prev = last;
	last->prev = NULL;
	tmp->next = NULL;
}

void	ft_rra(t_stack **a)
{
	ft_reverse_rotate (a);
	write (1, "rra\n", 4);
}

void	ft_rrb(t_stack **b)
{
	ft_reverse_rotate (b);
	write (1, "rrb\n", 4);
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	ft_reverse_rotate (a);
	ft_reverse_rotate (b);
	write (1, "rrr\n", 4);
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
// 	ft_rra (a);
// 	ft_rrb (b);
// 	printf("%d, %d, %d\n", (*a)->value, (*a)->next->value, (*a)->next->next->value);
// 	printf("%d, %d, %d\n", (*b)->value, (*b)->next->value, (*b)->next->next->value);
// 	ft_rrr (a, b);
// 	ft_rrr (a, b);
// 	printf("%d, %d, %d\n", (*a)->value, (*a)->next->value, (*a)->next->next->value);
// 	printf("%d, %d, %d\n", (*b)->value, (*b)->next->value, (*b)->next->next->value);
// }

