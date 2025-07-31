/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolonne <acolonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:35:06 by acolonne          #+#    #+#             */
/*   Updated: 2024/11/08 19:35:30 by acolonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_cpy;
	unsigned char	*s2_cpy;

	s1_cpy = (unsigned char *)s1;
	s2_cpy = (unsigned char *)s2;
	i = 0;
	while ((s1_cpy[i] || s2_cpy[i]) && (i < n))
	{
		if (s1_cpy[i] > s2_cpy[i])
			return (1);
		if (s1_cpy[i] < s2_cpy[i])
			return (-1);
		i++;
	}
	return (0);
}
