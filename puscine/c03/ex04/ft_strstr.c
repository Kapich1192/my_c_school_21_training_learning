/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:25:42 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/03 18:31:59 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (to_find[j] != '\0')
				{
					return (&str[i]);
				}
			}
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s;

	s1 = "Vasiliy hi, and hi Dimon";
	s2 = "hi";
	s = ft_strstr(s1, s2);
	printf("%s\n", s);
	return (0);
}
