/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-kr <acano-kr@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 12:11:34 by acano-kr          #+#    #+#             */
/*   Updated: 2026/05/21 13:33:28 by acano-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

static int  ft_count_args(int argc, char **argv)
{
	int		total;
	int		i;
	int		j;
	char	**split;

	total = 0;
	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		j = 0;
		while (split[j])
		{
			total++;
			j++;
		}
		j = 0;
		while (split[j])
			free(split[j++]);
		free(split);
		i++;
	}
	return (total);
}

static char	**ft_get_args(int argc, char **argv, int *size)
{
	int		i;
	char	**args;
	char	*str;

	i = 0;
	while (argv[i] < argc -1)
	{
		args = ft_split(argv[i], ' ');
		size = ++i;
	}
	str = malloc(sizeof(char **) * *args[i] + 1);
	i = 0;
	while ()
}

int	main(int argc, char **argv)
{
	int		*values;
	int		size;
	int		i;
	char	**args;

	i = 0;
	while (argv[i])
		args = ft_split(argv[1], ' ');
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
