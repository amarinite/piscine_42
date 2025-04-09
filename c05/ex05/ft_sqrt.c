/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:08:51 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/08 11:24:53 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	i = 1;
	while (i <= nb / 2)
	{
		if (i == nb / i && nb % i == 0)
			return (i);
		else if (i > nb / i)
			return (0);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	tests[] = {-4, 0, 1, 3, 16};
	int	num_tests = 5;
	
	for (int i = 0; i < num_tests; i++)
	{
		int result = ft_sqrt(tests[i]);
		printf("ft_sqrt(%d) = %d\n", tests[i], result);
	}
	return (0);
}*/
