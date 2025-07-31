/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolonne <acolonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:36:53 by acolonne          #+#    #+#             */
/*   Updated: 2024/11/13 16:45:10 by acolonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*map;

	i = 0;
	if (!s)
		return (0);
	map = malloc(ft_strlen(s) + 1);
	if (!map)
		return (0);
	while (s[i])
	{
		map[i] = (char)(*f)(i, s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
