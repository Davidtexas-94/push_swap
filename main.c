/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-kr <acano-kr@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 12:11:34 by acano-kr          #+#    #+#             */
/*   Updated: 2026/05/20 08:39:17 by acano-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

int	main(int argc, char **argv)
{
	int		*values;
	int		size;
	char	**args;

	if (argc < 2)
		return (0);
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
		args = argv + 1;
	size = 0;
	while (args[size])
		size++;
	if (size == 0)
		return (0);
	values = parse_args(args, size, &size);
	if (!values)
		error();
	free(values);
	return (0);
}

// 29. Se vier tudo numa unica string, senao conta str por str