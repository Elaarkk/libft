/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolonne <acolonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:33:00 by acolonne          #+#    #+#             */
/*   Updated: 2024/11/16 15:49:06 by acolonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static void	*overlap_start(unsigned char *dest2, unsigned char *src2, size_t n,
				unsigned char *tmp)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		tmp[0] = src2[i];
		dest2[i] = tmp[0];
		i++;
	}
	return (dest2);
}

static void	*overlap_end(unsigned char *dest2, unsigned char *src2, size_t n,
				unsigned char *tmp)
{
	while (n > 0)
	{
		tmp[0] = src2[n - 1];
		dest2[n - 1] = tmp[0];
		n--;
	}
	return (dest2);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;
	unsigned char	tmp[1];

	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	tmp[0] = 0;
	if (!dest && !src && n > 0)
		return (0);
	if (dest < src)
		return (overlap_start(dest2, src2, n, tmp));
	else
		return (overlap_end(dest2, src2, n, tmp));
	return (dest2);
}
