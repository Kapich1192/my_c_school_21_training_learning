/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:08:49 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/03 17:21:54 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		if (j < nb)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		if (j == nb)
		{
			dest[i] = '\0';
			return (dest);
		}
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	*s1;
	char	*s2;
	char	s[100];

	s1 = "Hello";
	s2 = "Dimon";
	ft_strncat(s, s1, 5);
	ft_strncat(s, " ", 1);
	ft_strncat(s, s2, 3);
	printf("%s\n", s);
	return (0);
}
