/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:21:09 by amarquez          #+#    #+#             */
/*   Updated: 2025/03/27 12:14:59 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	if (*b == 0)
		return ;
	aux = *a;
	*a = *a / *b;
	*b = aux % *b;
}
/*
int	main(void)
{
	int v1 = 2647;
	int v2 = 10;
	int* p1 = &v1;
	int* p2 = &v2;
	printf("Before -> v1: %d, v2: %d\n", v1, v2);
	ft_ultimate_div_mod(p1, p2);
	printf("After -> v1: %d, v2: %d", v1, v2);
}*/
