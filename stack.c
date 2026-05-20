/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-kr <acano-kr@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 15:30:24 by acano-kr          #+#    #+#             */
/*   Updated: 2026/05/21 00:19:59 by acano-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_node	*ft_new_node(int value)
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

static void	ft_add_botom(t_node **list, t_node *new)
{
	t_node	*n1;

	if (!new)
		return ;
	if (!*list)
	{
		*list = new;
		return ;
	}
	n1 = *list;
	while (n1->next)
		n1 = n1->next;
	n1->next = next;
	new->prev = n1;
}

t_stack *ft_init_stack(int *array, int size)
{
	t_stack	*stack;
	int		i;
	t_node	*novo

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	stack->size = 0;
	i = 0;
	while (i < size -1)
	{
		while (array[i])
		{
			novo = ft_new_node(array[i]);
			ft_add_botom(&stack->top, novo);
			stack = stack->size;
		}
	}
}
