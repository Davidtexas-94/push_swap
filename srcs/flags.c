/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-kr <acano-kr@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:25:04 by acano-kr          #+#    #+#             */
/*   Updated: 2026/05/26 01:32:59 by acano-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	is_flag(char *input, char *expected)
{
	int	in;
	int	ex;

	in = ft_strlen(input);
	ex = ft_strlen(expected);
	if (in == ex)
	{
		if (ft_strncmp(input, expected, ex) == 0)
			return (1);
	}
	return (0);
}

int	get_flag(int argc, char **argv, t_flags *flags)
{
	int	i;

	flags->strategy = FLAG_ADAPTIVE;
	flags->bench = 0;
	i = 1;
	while (i < argc && ft_strncmp(argv[i], "--", 2) == 0)
	{
		if (is_flag(argv[i] + 2, "bench"))
			flags->bench = 1;
		else if (is_flag(argv[i] + 2, "adaptive"))
			flags->strategy = FLAG_ADAPTIVE;
		else if (is_flag(argv[i] + 2, "simple"))
			flags->strategy = FLAG_SIMPLE;
		else if (is_flag(argv[i] + 2, "medium"))
			flags->strategy = FLAG_MEDIUM;
		else if (is_flag(argv[i] + 2, "complex"))
			flags->strategy = FLAG_COMPLEX;
		else
			return (-1);
		i++;
	}
	return (i);
}

void	execute_strat(t_stack *stack_a, t_stack *stack_b, t_flags *flags)
{
	if (flags->strategy == FLAG_SIMPLE)
		sort_simple(stack_a, stack_b); //PROVISÓRIO, ALTERAR PARA O SORT_REPESCTIVO.
	else if (flags->strategy == FLAG_MEDIUM)
		sort_simple(stack_a, stack_b); //PROVISÓRIO, ALTERAR PARA O SORT_REPESCTIVO.
	else if (flags->strategy == FLAG_COMPLEX)
		sort_simple(stack_a, stack_b); //PROVISÓRIO, ALTERAR PARA O SORT_REPESCTIVO.
	else if (flags->strategy == FLAG_ADAPTIVE)
		sort_simple(stack_a, stack_b); //PROVISÓRIO, ALTERAR PARA O SORT_REPESCTIVO.
	if (flags->bench == 1)
		ft_putstr_fd("BENCHMARK MODE ACTIVATED\n", 2);
}
