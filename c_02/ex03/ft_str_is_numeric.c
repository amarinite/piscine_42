/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:43:10 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/01 12:50:12 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
int     main(void)
{
        char *str1 = "6464136045";
	char *str2 = "+6+5a6";
        printf("\"%s\": %d (should return 1)\n", str1, ft_str_is_numeric(str1));
        printf("\"%s\": %d (should return 0)\n", str2, ft_str_is_numeric(str2));
        return (0);
}*/
