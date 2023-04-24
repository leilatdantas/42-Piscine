/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:22:40 by lebarbos          #+#    #+#             */
/*   Updated: 2023/02/15 19:16:26 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	strlenght(char *str)
{
	unsigned int	l;

	l = 0;
	while (*str != '\0')
	{
		l++;
		str++;
	}
	return (l);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l;
	unsigned int	i;

	if (size <= strlenght(dest))
		return (size + strlenght(src));
	l = strlenght(dest);
	i = 0;
	while (src[i] != '\0' && l + 1 < size)
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (strlenght(dest) + strlenght(&src[i]));
}

/*int	main()
{
	char src[] = "casas";
	char dest[] = "bon";
	printf("%d | %s", ft_strlcat(dest, src, 9), dest);
}*/
