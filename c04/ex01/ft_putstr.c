/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:52:37 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/07 11:00:39 by amarquez         ###   ########.fr       */
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
/*#include <stdio.h>
 
int     main(void)
{
        char str1[] = "Peepop";
        char str2[5];
	ft_strncpy(str2, str1, 4);
	str2[4] = '\0';
        printf("%s", str2);
        return (0);
}*/
