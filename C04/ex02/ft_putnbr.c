/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:04:58 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/18 17:06:48 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb >= 0 && nb <= 9)
	{
		nb = nb + 48;
		write (1, &nb, 1);
	}
	else if (nb >= 10)
	{
		ft_putnbr (nb / 10);
		nb = (nb % 10) + 48;
		write (1, &nb, 1);
	}
	else
	{
		write (1, "-", 1);
		nb = nb * -1;
		ft_putnbr (nb);
	}
}

/*int main ()
{
	int i = -123456789;
	ft_putnbr(i);
}*/