/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 17:25:25 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/16 17:26:52 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

int		main(void)
{
	char s1[30] = "coucoulesfilles";
	char s2[30] = "testestetststdfegvdvsvgs";
	char s3[30] = "123123456456789";
	char s4[30] = "hello";

	printf("solution (-1) = %d\n", strcmp(s1, s2));
	printf("solution (0) = %d\n", strcmp(s1, s3));
	printf("solution (1) = %d\n", strcmp(s1, s4));
    return(0);
}