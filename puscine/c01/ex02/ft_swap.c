/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:45:49 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/05/31 18:12:05 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	printf("temp = %d", &temp);
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 21;
	b = 42;
	ft_swap(&a, &b);
	printf("Origin a = 21, b = 42; Swap a = %d, b = %d;", a, b);
}
