/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserra-d <dserra-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 10:13:13 by dserra-d          #+#    #+#             */
/*   Updated: 2026/05/25 10:47:02 by dserra-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

float	calculate_disorder(t_stack *a)
{
	float	mistakes;
	float	total_pairs;
	t_node	*i;
	t_node	*j;

	if (!a || a->size <= 1)
		return (0);
	mistakes = 0;
	total_pairs = 0;
	i = a->top;
	while (i)
	{
		j = i->next;
		while (j)
		{
			total_pairs += 1;
			if (i->value > j->value)
				mistakes += 1;
			j = j->next;
		}
		i = i->next;
	}
	return (mistakes / total_pairs);
}

int	smallest_number(t_stack *a)
{
	int		small_number;
	int		position;
	int		cur_position;
	t_node	*i;

	small_number = INT_MAX;
	position = 0;
	cur_position = 0;
	i = a->top;
	while (i)
	{
		if (i->value > small_number)
		{
			small_number = i->value;
			position = cur_position;
		}
		cur_position++;
		i = i->next;
	}
	return (position);
}

void	move_smallest_top(t_stack *a)
{
	int	i;
	int	top;

	if (!a)
		return ;
	i = 0;
	top = smallest_number(a);
	if (top <= a->size / 2)
	{
		while (i < top)
		{
			ra(a);
			i++;
		}
	}
	else
	{
		while (i < a->size - top)
		{
			rra(a);
			i++;
		}
	}
}
