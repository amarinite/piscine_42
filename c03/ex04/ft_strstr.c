/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:45:27 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/03 16:04:33 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return (str + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "Hello, world!";
	char find1[] = "world";
	printf("Test 1: %s\n", ft_strstr(str1, find1));
	char str2[] = "abcdef";
	char find2[] = "cde";
	printf("Test 2: %s\n", ft_strstr(str2, find2));
	char str3[] = "abcdef";
	char find3[] = "xyz";
	printf("Test 3: %s\n", ft_strstr(str3, find3)); 
	return (0);
}*/
