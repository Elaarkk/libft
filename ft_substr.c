/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolonne <acolonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:00:59 by acolonne          #+#    #+#             */
/*   Updated: 2024/11/15 11:08:08 by acolonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	get_size(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = (size_t)start;
	while (s[i])
		i++;
	if (j >= i)
		return (0);
	if ((i - j) > len)
		i = len;
	else
		i = i - j;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	n;
	char	*sub;

	n = 0;
	i = get_size(s, start, len);
	if (i == 0)
	{
		sub = malloc(1);
		if (!sub)
			return (0);
		sub[0] = '\0';
		return (sub);
	}
	sub = malloc(sizeof(char) * (i + 1));
	if (!sub)
		return (0);
	i = (size_t)start;
	while (n < len && s[start])
		sub[n++] = s[start++];
	sub[n] = '\0';
	return (sub);
}
