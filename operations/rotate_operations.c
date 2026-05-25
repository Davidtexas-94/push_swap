/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserra-d <dserra-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:18:24 by dserra-d          #+#    #+#             */
/*   Updated: 2026/05/25 09:58:29 by dserra-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *a)
{
	rotate (a);
	write (1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	rotate (b);
	write (1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	rotate (a);
	rotate (b);
	write (1, "rr\n", 3);
}
