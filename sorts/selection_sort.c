#include "push_swap.h"

t_stack	*ft_find_min(t_stack **a)
{
	t_stack	*min;
	t_stack *cur;

	if (!a || !*a)
		return (NULL);
	cur = *a;
	min = cur;
	while (cur)
	{
		if (cur->value < min->value)
		min = cur;
		cur = cur->next;
	}
	return (min);
}

void	ft_selection_sort(t_stack **a, t_stack **b)
{
	t_stack	*min;

	while (*a)
	{
		min = ft_find_min (a);
		while (*a != min)
			ft_ra (a);
		ft_pb (a, b);
	}
	while (*b)
		ft_pa (a, b);
}

// #include <stdio.h>
// #include "push_swap.h"
// void print_stack(t_stack *s, char *name)
// {
//     printf("%s: ", name);
//     if (!s) printf("(empty)");
//     while (s)
//     {
//         printf("%d ", s->value);
//         s = s->next;
//     }
//     printf("\n");
// }

// int main(void)
// {
//     t_stack *node1 = ft_lstnew(3);
//     t_stack *node2 = ft_lstnew(2);
//     t_stack *node3 = ft_lstnew(5);
//     t_stack *node4 = ft_lstnew(4);
//     t_stack *node5 = ft_lstnew(1);
//     t_stack *node6 = ft_lstnew(6);

//     t_stack *a = node1;
//     node1->next = node2; node1->prev = NULL; 
//     node2->next = node3; node2->prev = node1;
//     node3->next = node4; node3->prev = node2;
//     node4->next = node5; node4->prev = node3;
//     node5->next = node6; node5->prev = node4;
//     node6->next = NULL;  node6->prev = node5; 

//     t_stack *b = NULL;

//     printf("--- Before Sort ---\n");
//     print_stack(a, "Stack A");
//     ft_selection_sort(&a, &b);
//     printf("--- After Sort ---\n");
//     print_stack(a, "Stack A");
//     print_stack(b, "Stack B"); 

//     return (0);
// }