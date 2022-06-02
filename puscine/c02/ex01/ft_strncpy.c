/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:46:14 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/02 13:16:55 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	s1[15] = "Hello";
	char	s2[15] = "Result";

	ft_strncpy(s1, s2, 3);
	printf("s1 = %s\n", s1);
	return (0);
}
