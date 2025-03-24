/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 10:48:46 by amarquez          #+#    #+#             */
/*   Updated: 2025/03/24 14:26:18 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_putchar('0' + (first / 10));
			ft_putchar('0' + (first % 10));
			ft_putchar(' ');
			ft_putchar('0' + (second / 10));
			ft_putchar('0' + (second % 10));
			if (first != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second++;
		}
		first++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
