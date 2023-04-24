/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:12:36 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/06 16:17:01 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		{
			b = a + 1;
			while (b <= '8')
			{
				c = b + 1;
				while (c <= '9')
				{
					ft_putchar(a, b, c);
					c++;
				}
				b++;
			}
			a++;
		}
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
