// #include "push_swap.h"

// void	insertion_sort(t_stuck **a, t_stuck **b)
// {
// 	t_stuck	*tmp;

// 	*b = *a;
// 	while (*a)
// 	{
// 		while (*b)
// 		{
// 			if ((*a)->value < (*b)->value)
// 			{
// 				(*a)->next = *b;
// 				(*b)->prev = *a;
// 				(*a) = NULL;
// 			}
// 			else if ((*b)->value < (*a)->value && (*a)->value < (*b)->next->value)
// 			{
// 				(*b)->next = tmp;
// 				(*b)->next = *a;
// 				(*a)->next = tmp;
// 				(*a)->prev = *b;
// 				tmp->prev = *a
// 			}
// 			else
// 			{
// 				(*b)->next->next = tmp;
// 				(*b)->next->next = *a;
// 				*a->prev = tmp
// 			}
// 		}
// 	}
// }