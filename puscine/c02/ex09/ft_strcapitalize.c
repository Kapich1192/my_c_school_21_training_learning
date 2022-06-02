/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:36:19 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/02 17:31:10 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_lc_c(char *c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	is_uc_c(char *c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	is_sym(char *c)
{
	if (is_lc_c(c) == 0 && is_uc_c(c) == 0)
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || i > 0 && is_lc_c(str[i]) == 1 && is_sym(str[i - 1]) == 1)
		{
			str[i] = 'A' + (str[i] - 'a');
			i++;
		}
		else if (is_uc_c(str[i]) == 1)
		{
			str[i] = 'a' + (str[i] - 'A');
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

int	main(void)
{
	char	s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(s);
	printf("%s\n", s);
	return (0);
}
