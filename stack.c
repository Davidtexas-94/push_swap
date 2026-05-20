/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-kr <acano-kr@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 15:30:24 by acano-kr          #+#    #+#             */
/*   Updated: 2026/05/20 17:31:11 by acano-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = 0;
	node->rank = 0;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

t_node	ft_add_botom(t_node **list, t_node *new)
{
	t_node	*n1;

	if (!new)
		return (NULL);
	if (!*list)
	{
		*list = new;
		return (NULL);
	}
	n1 = /* tem que fazer o listlast aqui */
}

t_stack *ft_init_stack(int *array, int size)
{
	t_stack	*stack;
	int		i;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	stack->size = 0;
	i = 0;
	while (i < size -1)
	{
		while (array[i])
			ft_new_node(array[i]);
		
	}
}
