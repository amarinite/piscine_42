/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:59:31 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/01 13:04:35 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
int     main(void)
{
	char *str1 = "KLsSJGS";
        char *str2 = "NSKHFL";
        printf("\"%s\": %d\n", str1, ft_str_is_uppercase(str1));
        printf("\"%s\": %d\n", str2, ft_str_is_uppercase(str2));
        return (0);
}*/
