/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:45:41 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/03 16:02:45 by amarquez         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = ft_strlen(src);
	i = 0;
	while (dest_len < size && dest[dest_len] != '\0')
		dest_len++;
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] && (dest_len + i < size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>

int	main(void)
{
	char buffer[10] = "Hello";
	char *src = ", World!";
	unsigned int result = ft_strlcat(buffer, src, sizeof(buffer));

	printf("Buffer after strlcat: '%s'\n", buffer);
	printf("Total length: %u\n", result);

	return (0);
}*/
