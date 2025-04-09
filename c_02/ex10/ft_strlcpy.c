/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:45:45 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/01 14:05:18 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (src_len);
}
/*
int	main(void)
{
	char	src[] = "Hello, world!";
	char	dest[10];
	unsigned int	len;	

	len = ft_strlcpy(dest, src, sizeof(dest));
	printf("source: \"%s\" (length: %u)\n", src, len);
	printf("destination: \"%s\"\n", dest);
	return (0);
}*/
