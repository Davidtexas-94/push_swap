/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserra-d <dserra-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:27:31 by dserra-d          #+#    #+#             */
/*   Updated: 2026/05/25 09:58:26 by dserra-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *a)
{
	reverse (a);
	write (1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	reverse (b);
	write (1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	reverse (a);
	reverse (b);
	write (1, "rrr\n", 4);
}
