/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 13:51:28 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/05 14:35:04 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	parse_int(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			printf("%c\n", str[i]);
			res *= 10;
			res += str[i] - '0';
		}
		i++;
	}
	res *= sign;
	return (res);
}

int	main(void)
{
	char	*s;
	int		f;

	s = "-5436";
	f = parse_int(s);
	printf("%d \n", f);
	return (0);
}
