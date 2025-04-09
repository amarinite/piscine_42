/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:44:42 by amarquez          #+#    #+#             */
/*   Updated: 2025/04/02 13:00:40 by amarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*u1;
	unsigned char	*u2;

	u1 = (unsigned char *) s1;
	u2 = (unsigned char *) s2;
	while (*u1 && (*u1 == *u2))
	{
		u1++;
		u2++;
	}
	return (*u1 - *u2);
}
/*
#include <stdio.h>

int	main(void)
{
	char test1[] = "ABC";
	char test2[]  = "ABD";
	printf("%s vs %s: %d (expected -1)", test1, test2, ft_strcmp(test1, test2));
	return (0);
}*/
