/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 10:17:55 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/05 13:48:41 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_white_sym(char c)
{
	if (c == ' ')
		return (0);
	return (1);
}

int	plus_or_minus(char *str, int *s_i)
{
	int	minus;
	int	i;

	i = 0;
	minus = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			minus++;
			i++;
			*s_i = i;
		}
		else if (str[i] == ' ' || str[i] == '+')
		{
			i++;
			*s_i = i;
		}
		else
			return (minus);
	}
	return (minus);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	if (plus_or_minus(str, &i) % 2 == 0)
		sign = 1;
	else
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res = res + (str[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}

int	main(void)
{
	int		f;
	char	*s;

	s = "      ----+--+1234567ab567";
	f = ft_atoi(s);
	printf("%d \n", f);
	return (0);
}
