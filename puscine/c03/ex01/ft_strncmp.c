/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:51:28 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/03 16:24:55 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (i == n)
			return (0);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*s1;
	char	*s2;
	int		s;

	s1 = "Hello";
	s2 = "Hi";
	s = ft_strncmp(s1, s2, 4);
	printf("s = %d;", s);
	return (0);
}
