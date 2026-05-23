/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-kr <acano-kr@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 12:11:34 by acano-kr          #+#    #+#             */
/*   Updated: 2026/05/22 17:02:52 by acano-kr         ###   ########.fr       */
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
	char	**args;
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		*values;
	int		size;

	size = 0;
	if (argc < 2)
		return (0);
	args = ft_get_args(argc, argv, &size);
	if (!args)
		return (error(), 0);
	values = parse_args(args, size, &size);
	if (!values)
		return (ft_free_args(args), 0);
	stack_a = ft_init_stack(values, size);
	if (!stack_a)
		return (ft_free_args(args), free(values), 0);
	stack_b = ft_init_empty();
	if (!stack_b)
		return (ft_free_args(args), ft_free_stack(stack_a), free(values), 0);
	free(values);
	ft_free_args(args);
	return (0);
}
