/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 17:25:25 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/16 22:10:57 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

int		main(void)
{
	char s1[30] = "\n";
	char s2[30] = "\n";
	char s3[30] = "coucouélesfilles";
	char s4[30] = "coucoulesfilles";
	char s5[30] = "";
	char s6[30] = "";
	char s7[30] = "coucoulesfilesyannah";
	unsigned int n;

	n = 1;

	printf("solution (-) = %d\n", strncmp(s1, s2, n));
	printf("solution (+) = %d\n", strncmp(s1, s3, n));
	printf("solution (0) = %d\n", strncmp(s1, s4, n));
	printf("solution (?) = %d\n", strncmp(s1, s5, n));
	printf("solution (?) = %d\n", strncmp(s5, s6, n));
	printf("solution (?) = %d\n", strncmp(s6, s1, n));
	printf("solution (?) = %d\n", strncmp(s1, s7, n));
	printf("solution (?) = %d\n", strncmp(s7, s1, n));
    return(0);
}