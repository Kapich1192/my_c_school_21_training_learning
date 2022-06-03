/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 09:24:11 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/03 10:09:08 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	string_length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	dest_length;
	int	temp;

	i = 0;
	dest_length = string_length(dest);
	while (src[i] != '\0')
	{
		temp = i + dest_length;
		if (i < size)
		{
			dest[temp] = src[i];
		}
		else if (i == size)
		{
			dest[temp] = '\0';
		}
	i++;
	}
	return (i);
}

int	main(void)
{
	char			s1[20] = "Hello";
	char			s2[10] = "Vasiliy";
	unsigned int	s;

	s = ft_strlcpy(s1, s2, 4);
	printf("s = %d, s1 = %s; \n", s, s1);
	return (0);
}
