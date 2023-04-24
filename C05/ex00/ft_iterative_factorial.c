/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:23:53 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/20 10:38:18 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ft;

	ft = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		ft = ft * nb;
		nb--;
	}
	return (ft);
}

/*int main()
{
	int n = 5;
	printf("%d\n", ft_iterative_factorial(n));
}*/