/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:59:10 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/21 15:59:37 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && (i < n))
		i++;
	return (s1[i] - s2[i]);
}

int main ()
{
	char lili[] = "casinhoa";
	char lulu[] = "casinho";
	unsigned int n = 7;
	printf("%d\n", ft_strncmp(lili, lulu, n));
	printf("%d\n", strncmp(lili, lulu, n));
}
