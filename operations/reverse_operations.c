/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserra-d <dserra-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:27:31 by dserra-d          #+#    #+#             */
/*   Updated: 2026/05/27 12:27:32 by dserra-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *a, t_flags *flag)
{
	if (!a)
		return ;
	reverse (a);
	if (flag)
		flag->rra++;
	// if (flag && flag->count_only)
    //     return ;
	write (1, "rra\n", 4);
}

void	rrb(t_stack *b, t_flags *flag)
{
	if (!b)
		return ;
	reverse (b);
	if (flag)
		flag->rrb++;
	// if (flag && flag->count_only)
    //     return ;
	write (1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b, t_flags *flag)
{
	if (!a || !b)
		return ;
	reverse (a);
	reverse (b);
	if (flag)
		flag->rrr++;
	// if (flag && flag->count_only)
    //     return ;
	write (1, "rrr\n", 4);
}
