/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 10:31:09 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/05 16:35:39 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	cond(int column, int line, int x, int y)
{
	if ((line == 1 && column == 1) || (line == y && column == 1))
		ft_putchar('A');
	else if ((line == 1 && column == x) || (line == y && column == x))
		ft_putchar('C');
	else if ((line == 1 || line == y) && (column != 1 || column != x))
		ft_putchar('B');
	else if ((column == 1 || column == x) && (line != 1 || line != x))
		ft_putchar('B');
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
