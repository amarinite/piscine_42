/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:57:34 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/09 11:27:44 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		ft_putchar(str[length]);
		length++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*u1;
	unsigned char	*u2;

	u1 = (unsigned char *) s1;
	u2 = (unsigned char *) s2;
	while (*u1 && (*u1 == *u2))
	{
		u1++;
		u2++;
	}
	return (*u1 - *u2);
}

void	ft_sort_params(char **arr, int size)
{
	int		i;
	int		j;
	int		min_idx;
	char	*temp;

	i = 0;
	while (i < size - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(arr[j], arr[min_idx]) < 0)
				min_idx = j;
			j++;
		}
		if (min_idx != i)
		{
			temp = arr[i];
			arr[i] = arr[min_idx];
			arr[min_idx] = temp;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		ft_sort_params(&argv[1], argc - 1);
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
