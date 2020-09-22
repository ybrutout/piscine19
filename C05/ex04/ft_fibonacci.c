/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 19:10:30 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/22 19:35:13 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int		ft_fibonacci(int index)
{
	int n;

	n = 0;
	if (index < 0)
		return(-1);
	if (index < 2)
	{
		return (index);
	}
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}

int	main(void)
{
	int	index;

	index = -2;
	while (index < 16)
	{
		printf("fibonacci(%d) = %d\n", index, ft_fibonacci(index));
		index++;
	}
}