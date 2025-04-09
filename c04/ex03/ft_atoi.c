/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:03:18 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/07 11:56:47 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign_count;
	int	number;

	i = 0;
	sign_count = 0;
	number = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign_count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	if (sign_count % 2 != 0)
		return (number * (-1));
	return (number);
}
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	l;

	l = nb;
	if (l < 0)
	{
		ft_putchar('-');
		l = -l;
	}
	if (l > 9)
	{
		ft_putnbr(l / 10);
		ft_putnbr(l % 10);
	}
	else
	{
		ft_putchar('0' + l);
	}
}

int	main(void)
{
	ft_putnbr(ft_atoi(" ---+--+1234ab567"));
	return (0);
}*/
