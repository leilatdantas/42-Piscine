/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 09:15:21 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/08 10:58:03 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

/*int	check(int nb)
{
	if (nb == 2147483647)
	{
		write(1, "2", 1);
		nb = nb % 100000000;
	}
	else if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = -(nb % 100000000);
	}
	return (nb);
}*/

void	ft_putnbr(int nb)
{
	int	mult;

//	nb = check(nb);
	mult = 10;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	while (!(mult > nb))
	{
		mult = mult * 10;
	}
	mult = mult / 10;
	while (mult >= 10)
	{
		ft_putchar((nb / mult) % 10 + '0');
		mult = mult / 10;
	}
	ft_putchar(nb % 10 + '0');
}

int	main(void)
{
	ft_putnbr(214748364);
}
