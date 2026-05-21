/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-kr <acano-kr@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 12:11:34 by acano-kr          #+#    #+#             */
/*   Updated: 2026/05/21 23:51:45 by acano-kr         ###   ########.fr       */
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
	int		j;
	int		k;
	char	**final_array;
	char	**split;

	*size = ft_count_args(argc, argv);
	final_array = malloc(sizeof(char **) * *size + 1);
	if (!final_array)
		return (NULL);
	k = 0;
	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		j = 0;
		while (split[j])
			final_array[k++] = split[j++];
		free(split);
		i++;
	}
	final_array[k] = NULL;
	return (final_array);
}

int	main(int argc, char **argv)
{
	char	*args;

/*	if (argc < 2)
args = ft_get_args(argc, argv, &size)
se args NULL → error()
values = parse_args(args, size, &size)
se values NULL → error() (liberta args antes)
stack_a = ft_init_stack(values, size)
stack_b = ft_init_stack vazio
liberta values
liberta args */
}
