/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_complex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserra-d <dserra-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 09:45:26 by dserra-d          #+#    #+#             */
/*   Updated: 2026/05/26 10:32:45 by dserra-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_complex(t_stack *a, t_stack *b)
{
	int	bits;
	int	max;
	int	i;
	int	k;

	if (!a || !b)
		return;
	max = a->size - 1;
	bits = 0;
	set_index(a);
	while (max > 0)
	{
		bits++;
		max >>= 1;
	}
	i = 0;
	while (i < bits)
	{
		k = a->size;
		while (k > 0)
		{
			if ((a->top->index >> i) & 1)
				ra (a);
			else
				pb (a, b);
			k--;
		}
		while (b->size > 0)
			pa (a, b);
		i++;
	}
}
