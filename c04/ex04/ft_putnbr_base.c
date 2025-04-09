/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:19:37 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/07 15:52:46 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	is_valid(char *str)
{
	int	i;
	int	j;

	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	l;

	if (!is_valid(base))
		return ;
	l = nbr;
	if (l < 0)
	{
		ft_putchar('-');
		l = -l;
	}
	if (l >= ft_strlen(base))
	{
		ft_putnbr_base(l / ft_strlen(base), base);
		ft_putnbr_base(l % ft_strlen(base), base);
	}
	else
	{
		ft_putchar(base[l]);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	printf("\nTest with decimal base (0123456789):\n");
	printf("42 in decimal:\n");
	ft_putnbr_base(42, "0123456789");
	printf("\n");

	printf("\nTest with binary base (01):\n");
	printf("42 in binary:\n");
	ft_putnbr_base(42, "01");
	printf("\n");

	printf("\nTest with hexadecimal base (0123456789ABCDEF):\n");
	printf("42 in hexadecimal:\n");
	ft_putnbr_base(42, "0123456789ABCDEF");
	printf("\n");

	printf("\nTest with octal base (01234567):\n");
	printf("42 in octal:\n");
	ft_putnbr_base(42, "01234567");
	printf("\n");

        printf("\nTest with custom base (poneyvif):\n");
        printf("42 in custom base:\n");
	ft_putnbr_base(42, "poneyvif");
	printf("\n");
}*/
