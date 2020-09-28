/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:07:59 by mbennafl          #+#    #+#             */
/*   Updated: 2020/09/20 18:10:26 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	main(int argc, char **argv)
{
	int **tab;
	int **sides;

	if (argc != 2 || !ft_is_arg_ok(argv[1]))
	{
		ft_put_error("Error");
		return (0);
	}
	tab = ft_create_table(SIZE);
	sides = ft_extract_side(argv[1], SIZE);
	if (ft_solve(tab, 0, SIZE, sides))
		ft_print_tab(tab, SIZE);
	else
		ft_put_error("Error");
	ft_free_tab(tab, SIZE);
	ft_free_tab(sides, SIZE);
	return (0);
}
