/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:40:31 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/05/30 16:01:59 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	start_char;

	start_char = 'a';
	while (start_char <= 'z')
	{
		ft_putchar(start_char);
		start_char++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
