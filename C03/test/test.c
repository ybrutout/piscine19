/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 17:25:25 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/17 07:54:26 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

int		main(void)
{
	char base[21] = "coucou";
	char s1[11] = "quoidebeau";
	char s2[11] = "tuvasbien?";
	char s3[2] = "";

	printf("base : %s\n", base);
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	printf("s3 : %s\n", s3);
	printf("base et s1 %s\n", strcat(base, s1));
	printf("base et s2 %s\n", strcat(base, s2));
	printf("base et s3 %s\n", strcat(base, s3));
	printf("s3 et base %s\n", strcat(s3, base));
}