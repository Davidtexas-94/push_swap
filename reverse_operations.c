/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserra-d <dserra-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:27:31 by dserra-d          #+#    #+#             */
/*   Updated: 2026/05/22 11:26:13 by dserra-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack *a)
{
	t_node	*old_top;
	t_node	*old_bottom;
	t_node	*new_bottom;

	if (!a || a->size <= 1)
		return ;
	old_bottom = a->bottom;
	new_bottom = old_bottom->prev;
	old_top = a->top;
	a->top = old_bottom;
	a->bottom = new_bottom;
	old_bottom->prev = NULL;
	old_top->prev = old_bottom;
	new_bottom->next = NULL;
	old_bottom->next = old_top;
}

void	ft_rrb(t_stack *b)
{
	t_node	*old_top;
	t_node	*old_bottom;
	t_node	*new_bottom;

	if (!b || b->size <= 1)
		return ;
	old_bottom = b->bottom;
	new_bottom = old_bottom->prev;
	old_top = b->top;
	b->top = old_bottom;
	b->bottom = new_bottom;
	old_bottom->prev = NULL;
	old_top->prev = old_bottom;
	new_bottom->next = NULL;
	old_bottom->next = old_top;
}

void	rra(t_stack *a)
{
	ft_rra (a);
	write (1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	ft_rrb (b);
	write (1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	ft_rra (a);
	ft_rrb (b);
	write (1, "rrr\n", 4);
}
