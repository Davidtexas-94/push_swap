/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_complex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserra-d <dserra-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 09:45:26 by dserra-d          #+#    #+#             */
/*   Updated: 2026/05/26 10:52:33 by dserra-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	int	get_bits(int max)
{
    int	bits;

    bits = 0;
    while (max > 0)
    {
        bits++;
        max >>= 1;
    }
    return (bits);
}

static	void	radix(t_stack *a, t_stack *b, int bit)
{
	int i;

	i = a->size;
	while (i > 0)
	{
		if ((a->top->index >> bit) & 1)
			ra (a);
		else
			pb (a, b);
		i--;
	}
	while (b->size > 0)
		pa (a, b);
}

void	sort_complex(t_stack *a, t_stack *b)
{
	int	bits;
	int	max;
	int	i;

	if (!a || !b)
		return;
	max = a->size - 1;
	bits = get_bits(max);
	set_index(a);
	i = 0;
	while (i < bits)
	{
		radix(a, b, i);
		i++;
	}
}
