/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 12:08:50 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/22 14:22:55 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (nb)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}

int		main(void)
{
	int n;

	n = -2;
	while (n < 7)
	{
		printf("fact(%d) = %d\n", n, ft_iterative_factorial(n));
		n++;
	}
}
