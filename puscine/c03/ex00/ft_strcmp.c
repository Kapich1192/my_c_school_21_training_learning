/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:18:27 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/03 15:48:00 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (ft_str_len(s1) > ft_str_len(s2))
		return (ft_str_len(s1));
	else if (ft_str_len(s1) < ft_str_len(s2))
		return (ft_str_len(s2) * (-1));
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*s1;
	char	*s2;
	int		res;

	s1 = "Hello";
	s2 = "Helli";
	res = ft_strcmp(s1, s2);
	printf("res = %d", res);
	return (0);
}
