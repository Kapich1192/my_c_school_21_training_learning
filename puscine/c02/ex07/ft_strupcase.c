/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:54:35 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/02 16:03:56 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = 'A' + (str[i] - 'a');
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	s[] = "hello 123";

	ft_strupcase(s);
	printf("s = %s;\n", s);
	return (0);
}
