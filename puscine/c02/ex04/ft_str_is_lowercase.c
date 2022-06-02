/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:01:58 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/02 15:09:54 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char	s1[] = "heLLo";
	char	s2[] = "hello";
	int		a1;
	int		a2;

	a1 = ft_str_is_lowercase(s1);
	a2 = ft_str_is_lowercase(s2);
	printf("s1 - %d, s2 - %d;\n", a1, a2);
	return (0);
}
