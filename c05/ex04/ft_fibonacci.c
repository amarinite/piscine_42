/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:08:39 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/08 10:54:10 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int main(void)
{
	int test_indices[] = {0, 5, 10, 15, -1};
	for (int i = 0; i < 5; i++)
	{
		int index = test_indices[i];
		int result = ft_fibonacci(index);
		if (result == -1)
			printf("fibonacci(%d) = Error: Invalid index\n", index);
		else
        		printf("fibonacci(%d) = %d\n", index, result);
	}

	return 0;
}*/
