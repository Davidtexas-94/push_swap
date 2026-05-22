/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserra-d <dserra-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:18:24 by dserra-d          #+#    #+#             */
/*   Updated: 2026/05/22 09:44:34 by dserra-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack *a)
{
	t_node *old_top;
	t_node *old_bottom;

	if (!a || a->size <= 1)
		return;
	old_top = a->top;
	a->top = old_top->next;
	old_bottom = a->bottom;
	old_top->prev = old_bottom;
	old_top->next = NULL;
	old_bottom->next = old_top;
	a->top->prev = NULL;
	a->bottom = old_top;
}

void	ft_rb(t_stack *b)
{
	t_node *old_top;
	t_node *old_bottom;

	if (!b || b->size <= 1)
		return ;
	old_top = b->top;
	b->top = old_top->next;
	old_bottom = b->bottom;
	old_top->prev = old_bottom;
	old_top->next = NULL;
	old_bottom->next = old_top;
	b->top->prev = NULL;
	b->bottom = old_top;
}

void	ra(t_stack *a)
{
	ft_ra(a);
	write (1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	ft_rb(b);
	write (1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	ft_ra(a);
	ft_rb(b);
	write (1, "rr\n", 3);
}
