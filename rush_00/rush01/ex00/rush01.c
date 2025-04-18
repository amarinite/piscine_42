/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvenega <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:22:32 by alvenega          #+#    #+#             */
/*   Updated: 2025/03/23 20:35:44 by alvenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

// Function to print a line with specific start, middle, and end characters
void	draw_line(int width, char first_line, char middle_line, char last_line)
{
	int	i;

	i = 0;
	while (i < width)
	{
		if (i == 0)
		{
			ft_putchar(first_line);
		}
		else if (i == width - 1)
		{
			ft_putchar(last_line);
		}
		else
		{
			ft_putchar(middle_line);
		}
		i++;
	}
	ft_putchar('\n');
}

// Function to generate the pattern
void	rush01(int x, int y)
{
	int	j;

	j = 0;
	if (x <= 0 || y <= 0)
	{
		write(1, "Error: Only numbers greater than 0 are allowed\n", 48);
		return ;
	}
	while (j < y)
	{
		if (j == 0)
		{
			draw_line(x, '/', '*', '\\');
		}
		else if (j == y -1)
		{
			draw_line(x, '\\', '*', '/');
		}
		else
		{
			draw_line(x, '*', ' ', '*');
		}
		j++;
	}
}
