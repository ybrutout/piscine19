/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 17:25:25 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/17 10:56:43 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

int		main(void)
{
	char str[30] = "bionifjourbifewbohbcibjl";
	char to_find[5] = "bif";

	printf("str %s\n", str);
	printf("to_find %s\n", to_find);
	printf("pattern %s\n", strstr(str, to_find));
	return(0);
}