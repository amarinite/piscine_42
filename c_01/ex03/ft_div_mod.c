/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 12:26:19 by amarquez          #+#    #+#             */
/*   Updated: 2025/03/27 12:16:02 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
		return ;
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int uno = 18;
	int dos = 3;

	int divS = 0;
	int modS = 0;
 
	int* divP = &divS;
	int* modP = &modS;

	ft_div_mod(uno, dos, divP, modP);

	printf("Div: %d, mod: %d", divS, modS);
}*/
