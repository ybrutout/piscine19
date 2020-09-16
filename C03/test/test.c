/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 17:25:25 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/16 20:32:12 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

int		main(void)
{
	char s1[30] = "coéle";
	char s2[30] = "cole";
	char s3[30] = "ctucouélesfilles";
	char s4[30] = "coucoulesfilles";
	char s5[30] = "";
	char s6[30] = "";
	char s7[30] = "coucoulesfiéllesyannah";

	printf("solution (-) = %d\n", strcmp(s1, s2));
	printf("solution (+) = %d\n", strcmp(s1, s3));
	printf("solution (0) = %d\n", strcmp(s1, s4));
	printf("solution (?) = %d\n", strcmp(s1, s5));
	printf("solution (?) = %d\n", strcmp(s5, s6));
	printf("solution (?) = %d\n", strcmp(s6, s1));
	printf("solution (?) = %d\n", strcmp(s1, s7));
	printf("solution (?) = %d\n", strcmp(s7, s1));
    return(0);
}