/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 09:46:43 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/05/31 11:23:14 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_next(char n1, char n2, char n3)
{
	ft_putchar(n1);
	ft_putchar(n2);
	ft_putchar(n3);
	ft_putchar(',');
	ft_putchar(' ');
}

int	factorial(int n)
{
	int	temp;
	int	i;

	temp = 1;
	i = 1;
	while (i <= n)
	{
		temp *= i;
		i++;
	}
	return (temp);
}

int	count_variants(int c, int v)
{
	int	set_size;

	set_size = factorial(c) / (factorial(c - v) * factorial(v));
	return (set_size);
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;
	int	i;

	n1 = '0';
	n2 = '1';
	n3 = '2';
	i = 0;
	while (i < count_variants(10, 3))
	{
		if (n1 < n2 && n2 < n3)
		{
			print_next(n1, n2, n3);
			i++;
		}
		if (n3 == '9')
		{
			n3 = '0';
			n2++;
		}
		if (n2 == '9')
		{
			n2 = '0';
			n1++;
		}
		n3++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
