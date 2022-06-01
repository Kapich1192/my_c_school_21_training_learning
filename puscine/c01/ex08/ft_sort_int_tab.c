/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:16:00 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/01 17:30:04 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	array[5];
	int	i;

	array[0] = 2;
	array[1] = 1;
	array[2] = 5;
	array[3] = 3;
	array[4] = 4;
	i = 0;
	ft_sort_int_tab(&array, 5);
	while (i < 5)
	{
		printf(" %d", array[i]);
		i++;
	}
	return (0);
}
