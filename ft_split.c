/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:21:35 by slahrach          #+#    #+#             */
/*   Updated: 2022/05/13 00:10:40 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(const char *str, char c)
{
	size_t	i;
	int		r;

	i = -1;
	r = 1;
	if (str[i] == '\0')
		return (0);
	while (str[++i])
	{
		if (str[i] == c && i != 0)
		{
			if (str[i - 1] != c)
				r++;
		}
		if (i == ft_strlen(str) - 1)
		{
			if (str[i] == c)
				r--;
		}
	}
	return (r);
}

char	**ft_split(char const *s, char c)
{
	int		r;
	int		start;
	int		i;
	int		j;
	char	**ptr;

	if (!s)
		return (NULL);
	r = count(s, c);
	ptr = (char **) malloc((r + 1) * sizeof (char *));
	j = -1;
	i = 0;
	while (++j < r)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		ptr[j] = ft_substr(s, start, i - start);
	}
	ptr[j] = NULL;
	return (ptr);
}
