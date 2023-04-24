/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:41:38 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/09 11:02:45 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod;

	mod = *a % *b;
	*a = *a / *b;
	*b = mod;
}

/*int main()
{
	int x = 30;
	int y = 4;
	ft_ultimate_div_mod(&x, &y);
	printf("%d, %d", x, y);
}*/