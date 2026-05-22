/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserra-d <dserra-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:40:07 by acano-kr          #+#    #+#             */
/*   Updated: 2026/05/22 11:25:15 by dserra-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long	ft_atol(const char *str)
{
	long long	i;
	long long	res;
	long long	sin;

	i = 0;
	sin = 1;
	res = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sin = -sin;
		i++;
	}
	while ((ft_isdigit(str[i])) && str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sin);
}
