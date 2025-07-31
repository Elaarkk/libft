/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolonne <acolonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:59:26 by acolonne          #+#    #+#             */
/*   Updated: 2024/11/11 20:04:19 by acolonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

static int	is_similar(char const *s1, char const *set, int i)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == s1[i])
			return (1);
		j++;
	}
	return (0);
}

char	*trimcpy(int i, int k, char *trim, char const *s1)
{
	int	n;

	n = 0;
	while (i < k + 1)
		trim[n++] = s1[i++];
	trim[n] = '\0';
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		k;
	int		n;

	i = 0;
	k = ft_strlen(s1) - 1;
	n = k + 1;
	if (!set)
		return ((char *)s1);
	if (!s1)
		return (0);
	while (is_similar(s1, set, i) && s1[i])
		i++;
	while (is_similar(s1, set, k) && k > 0)
		k--;
	n = ft_strlen(s1) - i - (ft_strlen(s1) - (k + 1));
	if (k == 0)
		(n = 0);
	trim = malloc(sizeof(char) * n + 1);
	if (!trim)
		return (0);
	trim = trimcpy(i, k, trim, s1);
	return (trim);
}
