/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:34:29 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/01 15:43:03 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	temp2;

	temp = (*a / *b);
	temp2 = (*a % *b);
	*a = temp;
	*b = temp2;
}

int	main(void)
{
	int	a;
	int	b;

	a = 11;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d, b = %d", a, b);
	return (0);
}
