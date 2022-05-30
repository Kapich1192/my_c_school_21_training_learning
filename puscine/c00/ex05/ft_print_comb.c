/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:30:08 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/05/30 21:11:12 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_next(char n1, char n2, char n3)
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

	temp = 1;
	while (n > 0)
	{
		temp *= n;
		n--;
	}
	return temp;
}

int	set_size(int count_points, int variants)
{
	int	size_set;

	size_set = factorial(count_points) /
		(factorial(count_points - variants) * factorial(variants));

	return size_set;
}

void ft_print_comb(void)
{
	char	n1, n2, n3;
	int	i;
	
	n1 = '0';
	n2 = '1';
	n3 = '2';
	i = 0;
	while( i < 790)
	{
		if(n1 < n2 && n2 < n3)
		{
			ft_next(n1, n2, n3);
		}

		if(n3 == '9')
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
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
	return(0);
}
