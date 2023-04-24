/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:05:45 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/23 10:31:36 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*cpy;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	cpy = (char *)malloc(sizeof(char) * i);
	if (cpy == NULL)
		return (0);
	while(src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return(cpy);
}
