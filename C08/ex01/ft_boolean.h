/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:05:19 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/24 19:16:34 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN
# define FT_BOOLEAN

# include <unistd.h>
# define FALSE 0
# define TRUE 1 
# define SUCCESS 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n" 
# define EVEN(nbr) (nbr % 2 == 0) ? 1 : 0
typedef int t_bool;

#endif