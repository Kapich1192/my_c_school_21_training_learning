/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:40:17 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/05/31 17:26:50 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	*********q1;
	int	********q2;
	int	*******q3;
	int	******q4;
	int	*****q5;
	int	****q6;
	int	***q7;
	int	**q8;
	int	*q9;
	int	q;

	q1 = &q2;
	q2 = &q3;
	q3 = &q4;
	q4 = &q5;
	q5 = &q6;
	q6 = &q7;
	q7 = &q8;
	q8 = &q9;
	q9 = &q;
	q = 15;
	ft_ultimate_ft(q1);
	printf("q = %d", q);
	return (0);
}
