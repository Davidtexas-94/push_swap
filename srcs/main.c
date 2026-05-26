/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-kr <acano-kr@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 12:11:34 by acano-kr          #+#    #+#             */
/*   Updated: 2026/05/26 17:36:02 by acano-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	char	**args;
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_flags	flags;
	int		size;

	size = 0;
	if (argc < 2)
		return (0);
	args = init_program(argc, argv, &flags, &size);
	if (!args)
		return (error(), 0);
	if (!setup_stacks(args, &stack_a, &stack_b, size))
		return (ft_free_args(args), error(), 0);
	execute_strat(stack_a, stack_b, &flags);
	ft_free_args(args);
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
	return (0);
}
