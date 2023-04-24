/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:21:44 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/05 16:26:09 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	cond(int column, int line, int x, int y)
{
	if ((column == 1 && line == 1) || (column == x && line == 1))
		ft_putchar('o');
	else if ((column == 1 && line == y) || (column == x && line == y))
		ft_putchar('o');
	else if ((column == 1 && line != 1) || (column == x && line != 1))
		ft_putchar ('|');
	else if ((column != 1 && line == 1) || (column != 1 && line == y))
		ft_putchar('-');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	column;
	int	line;

	column = 1;
	line = 1;
	if (x <= 0 || y <= 0)
	{
		write(1, "Computer says no!", 17);
		return ;
	}
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			cond(column, line, x, y);
			column++;
		}
		line++;
		ft_putchar('\n');
	}
}
