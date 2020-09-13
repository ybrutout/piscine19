/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 19:12:56 by ybrutout          #+#    #+#             */
/*   Updated: 2020/09/13 17:10:33 by ybrutout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
    char a; 
    char b;
    char c; 

    a = '0';
    while(a <= '7')
    {
        
        b = a+1;
        while(b <= '8')
        {
            
            c = b+1;
            while(c <= '9')
            {
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);
                if (a <= '6')
                {
                ft_putchar(',');
                ft_putchar(' ');
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

int     main(void)
{
    
}