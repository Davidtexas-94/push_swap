/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserra-d <dserra-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:49:08 by acano-kr          #+#    #+#             */
/*   Updated: 2026/05/25 10:46:01 by dserra-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//INCLUDES======================================================================
# include "libft.h"

//STRUCTS=======================================================================
typedef struct s_node
{
	int				value;
	int				index;
	int				rank;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*bottom;
	int		size;
}	t_stack;

//PARSE FUNCTIONS===============================================================
int			*parse_args(char **args, int count, int *size);

//STACK FUNCTIONS===============================================================
void		ft_free_stack(t_stack *stack);
t_stack		*ft_init_stack(int *array, int size);
t_stack		*ft_init_empty(void);

//UTILS FUNCTION================================================================
long long	ft_atol(const char *str);
void		ft_free_args(char **args);

//OPERATIONS FUNCTIONS==========================================================
void		swap(t_stack *s);
void		sa(t_stack *a);
void		sb(t_stack *b);
void		ss(t_stack *a, t_stack *b);
void		pa(t_stack *a, t_stack *b);
void		pb(t_stack *a, t_stack *b);
void		reverse(t_stack *s);
void		ra(t_stack *a);
void		rb(t_stack *b);
void		rr(t_stack *a, t_stack *b);
void		rotate(t_stack *s);
void		rra(t_stack *a);
void		rrb(t_stack *b);
void		rrr(t_stack *a, t_stack *b);

//ALGORITHM FUNCTIONS==========================================================
float		calculate_disorder(t_stack *a);
void		move_smallest_top(t_stack *a);
int			smallest_number(t_stack *a);
void		sort_simple(t_stack *a, t_stack *b);

#endif
