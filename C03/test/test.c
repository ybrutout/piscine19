/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 17:25:25 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/17 15:35:00 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

int		main(void)
{
	char base[21] = "coucou";
	char s1[11] = "quoi";
	

	printf("base : %s\n", base);
	printf("s1 : %s\n", s1);
	printf("base et s1 %s\n", strcat(base, s1));
}