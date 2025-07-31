/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolonne <acolonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:49:45 by acolonne          #+#    #+#             */
/*   Updated: 2024/11/15 12:53:49 by acolonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cpy;
	unsigned char	c_cpy;
	size_t			i;

	s_cpy = (unsigned char *)s;
	c_cpy = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s_cpy[i] == c_cpy)
			return ((unsigned char *)&s_cpy[i]);
		i++;
	}
	return (0);
}
