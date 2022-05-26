/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:33:46 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/05/26 15:51:51 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int	main(void)
{
	float	x;
	float	y;
	float	res;

	printf("Input number x: ");
	scanf("%f", &x);
	printf("Input number y: ");
	scanf("%f", &y);
	res = x / y;
	printf("%f / %f = %f;\n", x, y, res);
	return (0);
}
