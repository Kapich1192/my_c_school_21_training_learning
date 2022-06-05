/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 14:42:16 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/06/05 16:09:13 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	c_pl_mn(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

int	c_o_sm(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (i != j && base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	c_ln(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	char	temp[32];
	int		index;
	int		len;

	len = c_ln(base);
	if (len > 1 && c_o_sm(base) == 0 && c_pl_mn(base) == 0)
	{
		i = 0;
		if (nbr < 0)
			ft_putchar('-');
		while (nbr > 0)
		{
			index = nbr % len;
			temp[i] = base[index];
			nbr = nbr / (len);
			i++;
		}
		i--;
		while (i >= 0)
		{
			ft_putchar(temp[i]);
			i--;
		}
	}
}
