/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserra-d <dserra-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 11:15:17 by dserra-d          #+#    #+#             */
/*   Updated: 2026/05/25 15:30:25 by dserra-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_stack *a)
{
	if (!a)
		return ;
	if (a->top->value > a->top->next->value)
		sa(a);
}

void	sort_three(t_stack *a)
{
	t_node	*x;
	t_node	*y;
	t_node	*z;

	if (!a)
		return ;
	x = a->top;
	y = a->top->next;
	z = a->bottom;
	if (y->value < x->value && y->value < z->value && x->value < z->value)
		sa (a);
	else if (x->value < y->value && y->value > z->value && x->value > z->value)
		rra (a);
	else if (x->value > y->value && y->value < z->value && x->value > z->value)
		ra (a);
	else if (x->value < y->value && y->value > z->value && x->value < z->value)
	{
		rra (a);
		sa (a);
	}
	else if (x->value > y->value && y->value > z->value && x->value > z->value)
	{
		sa (a);
		rra (a);
	}
}

void	sort_simple(t_stack *a, t_stack *b)
{
	if (!a || !b)
		return ;
	if (a->size == 2)
		sort_two (a);
	else if (a->size == 3)
		sort_three (a);
	else
	{
		while (a->size > 0)
		{
			move_smallest_top(a);
			pb(a, b);
		}
		while (b->size > 0)
		{
			pa(a, b);
		}
	}
}
