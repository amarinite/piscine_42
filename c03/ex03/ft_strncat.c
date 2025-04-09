/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:45:17 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/07 10:29:31 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char dest1[50] = "Hello, ";
	char src1[] = "world!";
	printf("Test 1:\n");
	printf("Before: dest = \"%s\", src = \"%s\"\n", dest1, src1);
	ft_strncat(dest1, src1, 3);
	printf("After ft_strncat(dest, src, 3): \"%s\"\n\n", dest1);

	char dest2[50] = "Programming in ";
	char src2[] = "C";
	printf("Test 2:\n");
	printf("Before: dest = \"%s\", src = \"%s\"\n", dest2, src2);
	ft_strncat(dest2, src2, 1);
	printf("After ft_strncat(dest, src, 1): \"%s\"\n\n", dest2);
	
	return (0);
}*/
