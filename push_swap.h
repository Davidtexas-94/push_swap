/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-kr <acano-kr@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:49:08 by acano-kr          #+#    #+#             */
/*   Updated: 2026/05/21 12:59:26 by acano-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//INCLUDES======================================================================
# include "libft.h"

//STRUCTS=======================================================================
typedef struct s_node
{
	int				value;
	int				index;
	int				rank;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;

//PARSE FUNCTIONS===============================================================
t_node		*parse_args(char **args, int count, int *size);

//STACK FUNCTIONS===============================================================
static void	ft_add_botom(t_node **list, t_node *new);
void	ft_free_stack(t_stack *stack);

//ATOL FUNCTION=================================================================
long long	ft_atol(const char *str);

#endif
