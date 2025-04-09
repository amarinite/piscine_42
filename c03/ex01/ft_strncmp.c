/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:44:54 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/03 11:13:19 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	*u1;
	unsigned char	*u2;

	u1 = (unsigned char *) s1;
	u2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*u1 != *u2 || *u1 == '\0' || *u2 == '\0')
			return (*u1 - *u2);
		u1++;
		u2++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char test1[] = "ABC";
	char test2[]  = "ABCDE";
	printf("%s vs %s: %d", test1, test2, ft_strncmp(test1, test2, 3));

	return (0);
}*/
