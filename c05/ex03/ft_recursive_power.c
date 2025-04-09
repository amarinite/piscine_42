/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:08:20 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/08 10:44:04 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	int	base = 5;
	int	exponent = 4;
	printf("%d raised to the power %d is: ", base, exponent);
	printf("%d\n", ft_recursive_power(base, exponent));

	// Test edge cases
	printf("Any number raised to power 0 is: %d\n", ft_recursive_power(10, 0));
	printf("Return value for negative power: %d\n", ft_recursive_power(2, -3));

	return (0);
}*/
