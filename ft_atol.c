/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acano-kr <acano-kr@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:40:07 by acano-kr          #+#    #+#             */
/*   Updated: 2026/05/20 16:10:18 by acano-kr         ###   ########.fr       */
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

/* int	main(void)
{
	char	a[] = "   -1234ab56";
	char	b[] = " \t\n\v -123";
	char	c[] = "--123";
	char	d[] = "++123";
	char	e[] = "Escola 42";
	char	f[] = "2147483647";
	char	g[] = "-2147483648";

	printf("Resultado: %d\n", ft_atol(a));
	printf("Resultado: %d\n", ft_atol(b));
	printf("Resultado: %d\n", ft_atol(c));
	printf("Resultado: %d\n", ft_atol(d));
	printf("Resultado: %d\n", ft_atol(e));
	printf("Resultado: %d\n", ft_atol(f));
	printf("Resultado: %d\n", ft_atol(g));
} */
