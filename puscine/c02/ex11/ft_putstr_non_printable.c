/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:15:03 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/03 11:40:42 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_printable_char(char c)
{
	if (c >= 32 && c <= 127)
	{
		return (1);
	}
	return (0);
}

void	ft_put_no_printable_hex(char c)
{
	int		temp;
	char	hex1;
	char	hex2;

	temp = c;
	ft_putchar('\\');
	hex1 = temp / 16;
	hex2 = temp % 16;
	if (hex1 < 10)
	{
		ft_putchar(hex1 + 48);
	}
	else
	{
		ft_putchar(hex2 + 87);
	}
	if (hex2 < 10)
	{
		ft_putchar(hex2 + 48);
	}
	else
	{
		ft_putchar(hex2 + 87);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_printable_char(str[i]) == 1)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_put_no_printable_hex(str[i]);
		}
		i++;
	}
}

int	main(void)
{
	char	s[] = "Hello \f  bro!";

	ft_putstr_non_printable(s);
	return (0);
}
