/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:22:46 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/01 13:43:54 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;
	int	is_upper;
	int	is_lower;
	int	is_digit;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (new_word && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (!new_word && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		is_upper = (str[i] >= 'A' && str[i] <= 'Z');
		is_lower = (str[i] >= 'a' && str[i] <= 'z');
		is_digit = (str[i] >= '0' && str[i] <= '9');
		new_word = !(is_upper || is_lower || is_digit);
		i++;
	}
	return (str);
}
/*
int     main(void)
{
        char str1[] = "42 barcElona";
	char str2[] = " 42mots quarante-deux; cinquante+et+un";
        printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
        return (0);
}*/
