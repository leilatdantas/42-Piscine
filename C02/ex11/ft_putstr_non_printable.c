/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:24:44 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/14 15:18:13 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	hexdec(char a, char *str)
{
	str[0] = a / 16 + 48;
	str[1] = a % 16;
	if (str[1] < 10)
		str[1] = str[1] + 48;
	else
		str[1] = str[1] + 87;
}

void	ft_putstr_non_printable(char *str)
{
	char			str1[2];
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			hexdec(str[i], str1);
			write(1, "\\", 1);
			write(1, str1, 2);
		}
		else
			write(1, &str[i], 1);
	i++;
	}
}

/*int main()
{
	char lili[] = "Ola\ae stbe \tm\r?";
	ft_putstr_non_printable(lili);
}*/