/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-kr <acano-kr@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:25:04 by acano-kr          #+#    #+#             */
/*   Updated: 2026/05/25 20:33:23 by acano-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_flag(int argc, char **argv, t_flags *flags)
{
	int	i;

	flags->strategy = FLAG_ADAPTIVE;
	flags->bench = 0;
	i = 1;
	while (i < argc && ft_strncmp(argv[i], "--", 2) == 0)
	{
		if (ft_strncmp(argv[i] + 2, "bench", 6) == 0)
			flags->bench = 1;
		else if (ft_strncmp(argv[i] + 2, "adaptive", 9) == 0)
			flags->strategy = FLAG_ADAPTIVE;
		else if (ft_strncmp(argv[i] + 2, "simple", 7) == 0)
			flags->strategy = FLAG_SIMPLE;
		else if (ft_strncmp(argv[i] + 2, "medium", 7) == 0)
			flags->strategy = FLAG_MEDIUM;
		else if (ft_strncmp(argv[i] + 2, "complex", 8) == 0)
			flags->strategy = FLAG_COMPLEX;
		else
			return (-1);
		i++;
	}
	return (i);
}

void	execute_strategy(t_stack *stack_a, t_stack *stack_b, t_flags *flags)
{
	if (flags->strategy == FLAG_SIMPLE)
		sort_simple(stack_a, stack_b); //PROVISÓRIO, ALTERAR PARA O SORT_REPSCTIVO.
	else if (flags->strategy == FLAG_MEDIUM)
		sort_simple(stack_a, stack_b); //PROVISÓRIO, ALTERAR PARA O SORT_REPSCTIVO.
	else if (flags->strategy == FLAG_COMPLEX)
		sort_simple(stack_a, stack_b); //PROVISÓRIO, ALTERAR PARA O SORT_REPSCTIVO.
	else if (flags->strategy == FLAG_ADAPTIVE)
		sort_simple(stack_a, stack_b); //PROVISÓRIO, ALTERAR PARA O SORT_REPSCTIVO.
	if (flags->bench == 1)
		ft_putstr_fd("BENCHMARK MODE ACTIVATED\n", 1);
}