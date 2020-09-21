/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 17:25:25 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/21 07:49:21 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int		main(void)
{
	char str[20] = "hello world";
	char to_find[15] = "worldghwqg";

	printf("str %s\n", str);
	printf("to_find %s\n", to_find);
	printf("pattern : %s\n", strstr(str, to_find));
	return(0);
}
