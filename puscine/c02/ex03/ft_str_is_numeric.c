/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:12:08 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/02 14:49:06 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	char	s1[] = "Hello";
	char	s2[] = "15654646";
	int		a1;
	int		a2;

	a1 = ft_str_is_numeric(s1);
	a2 = ft_str_is_numeric(s2);
	printf("s1 - %d\n", a1);
	printf("s2 - %d\n", a2);
	return (0);
}
