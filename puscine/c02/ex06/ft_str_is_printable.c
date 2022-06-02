/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:38:23 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/02 15:50:10 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
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
	char	s2[] = "Hel\tllo";
	int		a1;
	int		a2;

	a1 = ft_str_is_printable(s1);
	a2 = ft_str_is_printable(s2);
	printf("s1 - %d, s2 - %d;\n", a1, a2);
	return (0);
}
