/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapgenfast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 06:25:29 by agraton           #+#    #+#             */
/*   Updated: 2020/09/28 07:28:14 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "mapgen.h"

void		ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void		ft_putnbr(int nb, int fd)
{
	if (nb >= 10)
		ft_putnbr(nb/10, fd);
	ft_putchar(nb % 10 + '0', fd);
}

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			main(int argc, char **argv)
{
	int		fd;
	char	*str;
	int		fullness;
	int		x;
	int		y;
	int		i;
	int		o;

	if (argc == 1)
	{
		write(1, "Usage: ./mapgenfast FILE.TXT COLLUM ROW \"EOF\" FULLNESS\n", 55);
		return (0);
	}
	if (argc != 6)
	{
		write(1, "Wrong size\n", 11);
		return (1);
	}
	if (ft_strlen(argv[4]) != 3)
	{
		write(1, "EOF fail\n", 9);
		return (1);
	}
	if (!(fd = open(argv[1], O_WRONLY)))
	{
		write(1, "can't open file\n", 16);
		return (1);
	}
	fullness = ft_atoi(argv[5]);
	x = ft_atoi(argv[2]);
	y = ft_atoi(argv[3]);
	if (!(str = malloc(sizeof(char) * (x + 1))))
	{
		write(1, "Malloc Fail\n", 12);
		return (1);
	}
	ft_putnbr(y, fd);
	write(fd, argv[4], 3);
	write(fd, "\n", 1);
	i = -1;
	while (++i < y)
	{
		o = -1;
		while (++o < x)
		{
			if (!(rand() % fullness))
				str[o] = argv[4][1];
			else
				str[o] = argv[4][0];
		}
		str[o] = '\n';
		write(fd, str, x + 1);
	}
	close(fd);
	return (0);
}
