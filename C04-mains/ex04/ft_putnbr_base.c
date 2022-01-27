/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:55:30 by proche-c          #+#    #+#             */
/*   Updated: 2021/11/18 19:08:44 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_calculate_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_check_base(char *base, int base_number)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == 45 || base[i] == 43)
			return (0);
		j = i + 1;
		while (j <= base_number)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_number;
	int	check_base;

	base_number = ft_calculate_base(base);
	if (base_number < 2)
		return ;
	check_base = ft_check_base(base, base_number);
	if (check_base == 0)
		return ;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		nbr = nbr + 1;
		if (nbr > base_number - 1)
		{
			ft_putnbr_base(nbr / base_number, base);
			ft_putnbr_base(nbr % base_number, base);
		}
		else
			ft_putchar(base[(nbr + 1) % base_number]);
		return;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > base_number - 1)
	{
		ft_putnbr_base(nbr / base_number, base);
		ft_putnbr_base(nbr % base_number, base);
	}
	else
		ft_putchar(base[nbr % base_number]);
}
