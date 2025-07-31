/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolonne <acolonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:44:15 by acolonne          #+#    #+#             */
/*   Updated: 2024/11/13 16:18:55 by acolonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	len_nb(long nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
		nbr = -nbr;
	while (nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

static char	*zero(char *nb)
{
	nb = malloc(2);
	if (!nb)
		return (0);
	nb[0] = '0';
	nb[1] = '\0';
	return (nb);
}

static char	*put_in_numbers(long nbr, char *nb, int signe, int len)
{
	int	end;

	len = len_nb(nbr);
	end = len;
	nb = malloc(len + signe + 1);
	if (!nb)
		return (0);
	if (signe == 1)
	{
		nb[0] = '-';
		nbr = -nbr;
		len++;
	}
	len--;
	while (nbr > 0)
	{
		nb[len] = (nbr % 10) + 48;
		nbr = nbr / 10;
		len--;
	}
	nb[end + signe] = '\0';
	return (nb);
}

char	*ft_itoa(int n)
{
	char	*nb;
	long	nbr;
	int		len;
	int		signe;

	nbr = n;
	nb = 0;
	len = 0;
	signe = 0;
	if (nbr == 0)
		return (zero(nb));
	if (n < 0)
		signe = 1;
	nb = put_in_numbers(nbr, nb, signe, len);
	return (nb);
}
