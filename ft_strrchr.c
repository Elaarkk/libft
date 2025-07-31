/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolonne <acolonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:07:52 by acolonne          #+#    #+#             */
/*   Updated: 2024/11/08 19:21:47 by acolonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	i = 0;
	ch = (unsigned char)c;
	while (s[i])
		i++;
	if (ch == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)(&s[i]));
		i--;
	}
	return (0);
}
