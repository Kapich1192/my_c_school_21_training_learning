/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:36:44 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/04 09:25:54 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		if (j < size)
		{
			dest[i + j] = src[j];
		}
		j++;
	}
	return (i + j);
}

int	main(void)
{
	char	*s1;
	char	*s2;
	char	s[100];
	int		len;

	s1 = "Hello";
	s2 = "Dimdimich";
	len = ft_strlcat(s, s1, 5);
	ft_strlcat(s, s2, 3);
	printf("len = %d, s = %s", len, s);
	return (0);
}
