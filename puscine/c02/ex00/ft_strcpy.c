/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:05:34 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/02 12:27:32 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_array_length(char *array[])
{
	int	i;

	i = 0;
	while (array[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	copy_str(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	char	cpy_dest[ft_array_length(&src)];

	i = 0;
	while (src[i] != '\0')
	{
		cpy_dest[i] = src[i];
		i++;
	}
	cpy_dest[i] = '\0';
	copy_str(dest, cpy_dest);
	return (dest);
}

int	main(void)
{
	char	s1[16];
	char	s2[8];

	ft_strcpy(s1, "I am Student! ");
	ft_strcpy(s2, "Hello");
	printf("\n\ns1 = %s, s2 = %s;\n\n", s1, s2);
	ft_strcpy(s1, s2);
	printf("after s1 = %s\n", s1);
	return (0);
}
