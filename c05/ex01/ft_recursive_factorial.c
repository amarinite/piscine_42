/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:07:47 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/07 17:10:33 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
	{
		return (1);
	}
	return (nb * (ft_recursive_factorial(nb - 1)));
}
/*
#include <stdio.h>

int     main(void)
{
        printf("%i\n", ft_recursive_factorial(7));
        return (0);
}*/
