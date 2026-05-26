/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserra-d <dserra-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:00:50 by dserra-d          #+#    #+#             */
/*   Updated: 2026/05/26 13:20:07 by dserra-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	void	pass_to_b(t_stack *a, t_stack *b, int min, int max)
{
	int	i;
	int	position;

	i = a->size;
	while (i > 0)
	{
		if (a->top->index >= min && a->top->index < max)
			pb(a, b);
		else
		{
			position = chuck_position(a, min, max);
			if (position <= a->size / 2)
				ra (a);
			else
				rra (a);
		}
		i--;
	}
}

void	sort_medium(t_stack *a, t_stack *b)
{
	int	chunk;
	int	chunck_size;
	int	total_chuncks;

	if (!a || !b)
		return ;
	set_index(a);
	chunck_size = ft_sqrt(a->size) + ft_sqrt(a->size) / 2;
	total_chuncks = a->size / chunck_size + 1;
	chunk = 0;
	while (chunk < total_chuncks)
	{
		pass_to_b(a, b, chunk * chunck_size, (chunk + 1) * chunck_size);
		chunk++;
	}
	while (b->size > 0)
	{
		move_index_top(b);
		pa (a, b);
	}
}
