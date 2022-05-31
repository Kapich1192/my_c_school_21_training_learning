/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:53:47 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/05/31 15:14:28 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(char a, char b)
{
	if (a == '8' && b == '9')
	{
		ft_putchar(a);
		ft_putchar(b);
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int	factorial(int n)
{
	int	temp;
	int	i;

	i = 1;
	temp = 1;
	while (i <= n)
	{
		temp *= i;
		i++;
	}
	return (temp);
}

int	set_size(int n, int k)
{
	int	size;

	size = factorial(n) / (factorial(n - k) * factorial(k));
	return (size);
}

void	ft_print_combn(void)
{
	char	a;
	char	b;
	int		size;

	a = '0';
	b = '1';
	size = set_size(10, 2);
	while (size > 0)
	{
		if (a < b)
		{
			print(a, b);
			size--;
		}
		b++;
		if (b > '9')
		{
			a++;
			b = '0';
		}
	}
}
