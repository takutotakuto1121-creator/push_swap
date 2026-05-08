#include "push_swap.h"

void	ft_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = first;
	while (last->next)
		last = last->next;
	*stack = first->next;
	(*stack)->prev = NULL;
	last->next = first;
	first->prev = last;
	first->next = NULL;
}

void	ft_ra(t_stack **a)
{
	ft_rotate (a);
	write (1, "ra\n", 3);
}

void	ft_rb(t_stack **b)
{
	ft_rotate (b);
	write (1, "rb\n", 3);
}

void	ft_rr(t_stack **a, t_stack **b)
{
	ft_rotate (a);
	ft_rotate (b);
	write (1, "rr\n", 3);
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
// 	ft_ra (a);
// 	ft_rb (b);
// 	printf("%d, %d, %d\n", (*a)->value, (*a)->next->value, (*a)->next->next->value);
// 	printf("%d, %d, %d\n", (*b)->value, (*b)->next->value, (*b)->next->next->value);
// 	ft_rr (a, b);
// 	ft_rr (a, b);
// 	printf("%d, %d, %d\n", (*a)->value, (*a)->next->value, (*a)->next->next->value);
// 	printf("%d, %d, %d\n", (*b)->value, (*b)->next->value, (*b)->next->next->value);
// }