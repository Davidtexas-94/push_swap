/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-kr <acano-kr@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:49:08 by acano-kr          #+#    #+#             */
/*   Updated: 2026/05/20 08:40:01 by acano-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//INCLUDES
# include "libft.h"
// END INCLUDES 

//STRUCT STACK
typedef struct s_stack
{
	int	*data;
	int	size;
	int	capacity;
}	t_stack;

//PARSE FUNCTIONS===============================================================
int		*parse_args(char **args, int count, int *size);

//MAIN FUNCTIONS================================================================
int	main(int argc, char **argv);

//ATOL FUNCTION=================================================================
int		ft_atol(const char *str);

#endif
