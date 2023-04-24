/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:34:09 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/05 16:34:43 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	cond(int column, int line, int x, int y)
{
	if ((line == 1 && column == 1) || (line == 1 && column == x))
		ft_putchar('A');
	else if ((line == y && column == 1) || (line == y && column == x))
		ft_putchar('C');
	else if ((line == 1 || line == y) && (column != 1 || column != x))
		ft_putchar('B');
	else if ((column == 1 || column == x) && (line != 1 || line != y))
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
