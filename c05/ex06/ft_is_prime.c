/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:09:06 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/08 11:34:13 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	numbers[] = {-5, 0, 5, 11, 15};
	int	count = 5;
	
	printf("Testing prime numbers:\n");
	printf("---------------------\n");
	
	for (int i = 0; i < count; i++)
	{
		if (ft_is_prime(numbers[i]))
			printf("%d is prime\n", numbers[i]);
		else
			printf("%d is not prime\n", numbers[i]);
	}
	return (0);
}*/
