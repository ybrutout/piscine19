/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 10:33:20 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/27 08:52:36 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

# include <stdio.h>
# include <stdlib.h>

typedef struct	s_stock_str
{
	int size;
	char *str;
	char *copy;
}				t_stock_str;

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

#endif 