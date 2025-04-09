/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:07:35 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/07 17:09:40 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb != 0)
	{
		while (nb > 0)
		{
			result = result * nb;
			nb--;
		}
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_iterative_factorial(7));
	return (0);
}*/
