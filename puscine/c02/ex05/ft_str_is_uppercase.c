/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:26:34 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/02 15:31:51 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int	main(void)
{
	char	s1[] = "HELLO";
	char	s2[] = "HEllO";
	int		a1;
	int		a2;

	a1 = ft_str_is_uppercase(s1);
	a2 = ft_str_is_uppercase(s2);
	printf("s1 - %d, s2 - %d;\n", a1, a2);
	return (0);
}
