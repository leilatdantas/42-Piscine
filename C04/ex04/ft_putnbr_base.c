/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:08:41 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/19 14:43:58 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>

int	checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	size(char *b)
{
	int	s;

	s = 0;
	while (b[s] != '\0')
		s++;
	return (s);
}

void	recursive(int nbr, char *base)
{
	if (nbr >= size(base))
	{
		recursive(nbr / size(base), base);
		nbr = nbr % size(base);
	}
	write(1, &(base[nbr]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (checkbase(base) != 0)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		recursive(nbr, base);
	}
}

int main()
{
	char str[] = "0123456789";
	int nbr = -5478773672;
	ft_putnbr_base(nbr, str);
}
