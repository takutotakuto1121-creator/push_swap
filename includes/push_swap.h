#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <unistd.h>
# include <stdlib.h>

typedef struct		s_stack
{
	int				value;
	struct s_stack	*prev;
	struct s_stack	*next;
}					t_stack;

/*lists*/
t_stack	*ft_lstnew(int value);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstdel_front(t_stack **lst);

/*utils*/
void	ft_swap(t_stack **a);
void	ft_sa(t_stack **a);
void	ft_sb(t_stack **b);
void	ft_ss(t_stack **a, t_stack **b);
void	ft_push(t_stack **to, t_stack **from);
void	ft_pa(t_stack **a, t_stack **b);
void	ft_pb(t_stack **a, t_stack **b);
void	ft_rotate(t_stack **stack);
void	ft_ra(t_stack **a);
void	ft_rb(t_stack **b);
void	ft_rr(t_stack **a, t_stack **b);
void	ft_reverse_rotate(t_stack **stack);
void	ft_rra(t_stack **a);
void	ft_rrb(t_stack **b);
void	ft_rrr(t_stack **a, t_stack **b);

#endif