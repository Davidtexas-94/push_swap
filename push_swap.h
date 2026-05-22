/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-kr <acano-kr@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:49:08 by acano-kr          #+#    #+#             */
/*   Updated: 2026/05/22 12:17:30 by acano-kr         ###   ########.fr       */
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
int		*parse_args(char **args, int count, int *size);

//STACK FUNCTIONS===============================================================
void		ft_free_stack(t_stack *stack);
t_stack		*ft_init_stack(int *array, int size);
t_stack		*ft_init_empty(void);

//UTILS FUNCTION================================================================
long long	ft_atol(const char *str);
void		ft_free_args(char **args);

//OPERATIONS FUNCTIONS==========================================================
void		sa(t_stack *a);
void		sb(t_stack *b);
void		ss(t_stack *a, t_stack *b);
void		pa(t_stack *a, t_stack *b);
void		pb(t_stack *a, t_stack *b);
void		ft_ra(t_stack *a);
void		ft_rb(t_stack *b);
void		ra(t_stack *a);
void		rb(t_stack *b);
void		rr(t_stack *a, t_stack *b);
void		ft_rra(t_stack *a);
void		ft_rrb(t_stack *b);
void		rra(t_stack *a);
void		rrb(t_stack *b);
void		rrr(t_stack *a, t_stack *b);

//ALGORITHM FUNCTIONS==========================================================
float		calculate_disorder(t_stack *a);
void		move_biggest_top(t_stack *a);
int			biggest_number(t_stack *a);
void		sort_simple(t_stack *a, t_stack *b);


#endif
