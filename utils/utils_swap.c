#include "push_swap.h"

void	ft_swap(t_stack **a)
{
	int	tmp;
	
	if (!a || !*a || !(*a)->next)
		return ;
	tmp = (*a)->value;
	(*a)->value = (*a)->next->value;
	(*a)->next->value = tmp;
}

void	ft_sa(t_stack **a)
{
	ft_swap (a);
	write (1, "sa\n", 3);
}

void	ft_sb(t_stack **b)
{
	ft_swap (b);
	write (1, "sb\n", 3);
}

void	ft_ss(t_stack **a, t_stack **b)
{
	ft_swap (a);
	ft_swap (b);
	write (1, "ss\n", 3);
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_stack *node1 = ft_lstnew (1);
// 	t_stack *node2 = ft_lstnew (2);
// 	t_stack *node3 = ft_lstnew (3);
// 	node1->next = node2;
// 	node2->next = node3;
// 	node2->prev = node1;
// 	node3->prev = node2;

// 	t_stack *node4 = ft_lstnew (1);
// 	t_stack *node5 = ft_lstnew (2);
// 	t_stack *node6 = ft_lstnew (3);
// 	node4->next = node5;
// 	node5->next = node4;
// 	node5->prev = node6;
// 	node6->prev = node5;

	
// 	printf("%d, %d, %d\n", node1->value, node2->value, node3->value);
// 	printf("%d, %d, %d\n", node4->value, node5->value, node6->value);
// 	ft_sa (&node1);
// 	ft_sb (&node4);
// 	printf("%d, %d, %d\n", node1->value, node2->value, node3->value);
// 	printf("%d, %d, %d\n", node4->value, node5->value, node6->value);
// 	ft_ss (&node1, &node4);
// 	printf("%d, %d, %d\n", node1->value, node2->value, node3->value);
// 	printf("%d, %d, %d\n", node4->value, node5->value, node6->value);
// }