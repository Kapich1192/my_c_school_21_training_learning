/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:35:10 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/02 13:50:42 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			i++;
		}
		else if (str[i] <= 'Z' && str[i] >= 'A')
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
	char	s2[] = "Hello 1";
	int		s1a;
	int		s2a;

	s1a = ft_str_is_alpha(s1);
	s2a = ft_str_is_alpha(s2);
	printf("s1 = %d, s2 = %d;\n", s1a, s2a);
	return (0);
}
