/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:54:47 by slahrach          #+#    #+#             */
/*   Updated: 2021/11/19 21:45:53 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 != '\0' || *s2 != '\0') && n > 0)
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main ()
{
	char s1[33] = "sara\0abc";
	char s2[33] = "sara\0abc";
	char d1[33] = "sara\0abc";
	char d2[33] = "sara\0abc";
	printf("%d\n %s\n %s\n",strncmp(s1, d1, 9), s1, d1);
	printf("%d %s\n %s",ft_strncmp(s2, d2, 9),s2, d2);
}*/
