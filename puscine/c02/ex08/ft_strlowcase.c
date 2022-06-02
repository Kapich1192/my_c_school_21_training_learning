/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:21:49 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/02 16:28:25 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 'a' + (str[i] - 'A');
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	s[] = "HELLO 123";

	ft_strlowcase(s);
	printf("s = %s;\n", s);
	return (1);
}
