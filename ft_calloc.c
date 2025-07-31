/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolonne <acolonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:19:20 by acolonne          #+#    #+#             */
/*   Updated: 2024/11/11 18:42:48 by acolonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*memory;

	i = 0;
	memory = malloc(nmemb * size);
	if (!memory)
		return (0);
	while (i < (nmemb * size))
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}
