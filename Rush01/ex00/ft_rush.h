/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 11:20:00 by dbanzizi          #+#    #+#             */
/*   Updated: 2020/09/20 17:54:45 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H
# define SIZE 4

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		**ft_create_table(int size);

void	ft_print_tab(int **tab, int size);

void	ft_put_error(char *error);

int		**ft_extract_side(char *str, int size);

int		ft_check_duplicate(int **tab, int x, int y, int size);

int		ft_check_top(int **tab, int x, int size, int *top);

int		ft_check_bottom(int **tab, int x, int size, int *bottom);

int		ft_check_left(int **tab, int y, int size, int *left);

int		ft_check_right (int **tab, int y, int size, int *right);

int		ft_is_arg_ok(char *str);

int		ft_strlen(char *str);

int		ft_check_value(int **tab, int x, int y, int **sides);

int		ft_solve(int **tab, int turn, int size, int **sides);

void	ft_free_tab(int **tab, int size);

#endif
