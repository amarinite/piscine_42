/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:48:01 by amarquez          #+#    #+#             */
/*   Updated: 2025/03/27 15:39:48 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	end;
	int	temp;

	count = 0;
	end = size -1;
	while (count < end)
	{
		temp = tab[count];
		tab[count] = tab[end];
		tab[end] = temp;
		count++;
		end--;
	}
}
/*
int	main(void)
{
	int arr[5] = {1, 1, 5, 3, 2};
	int sz = 5;
	ft_rev_int_tab(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return (0);
}*/
