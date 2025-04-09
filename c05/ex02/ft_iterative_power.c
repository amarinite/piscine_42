/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:08:07 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/08 10:35:41 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	base = 5;
	int	exponent = 4;
	printf("%d raised to the power %d is: ", base, exponent);
	printf("%d\n", ft_iterative_power(base, exponent));

	// Test edge cases
	printf("Any number raised to power 0 is: %d\n", ft_iterative_power(10, 0));
	printf("Return value for negative power: %d\n", ft_iterative_power(2, -3));

	return (0);
}*/
