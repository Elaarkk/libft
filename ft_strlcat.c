/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolonne <acolonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:26:08 by acolonne          #+#    #+#             */
/*   Updated: 2024/11/08 17:27:02 by acolonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	n;
	size_t	len_dst;
	size_t	len_source;

	n = ft_strlen(dst);
	len_dst = n;
	len_source = ft_strlen(src);
	i = 0;
	if (len_dst >= siz)
		return (len_source + siz);
	while (i + len_dst < (siz - 1) && src[i])
	{
		dst[n] = src[i];
		n++;
		i++;
	}
	if (siz != 0)
		dst[n] = '\0';
	return (len_dst + ft_strlen(src));
}
