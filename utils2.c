/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:25:17 by rmonney           #+#    #+#             */
/*   Updated: 2021/11/12 16:43:56 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ptrprint(void *ptr)
{
	ptr = NULL;
	return (0);
}

int	which_hexa(int n, char flag)
{
	int	count;

	count = 0;
	if (flag == 'x')
		count = hexaprint(n, "0123456789abcdef");
	else if (flag == 'X')
		count = hexaprint(n, "0123456789ABCDEF");
	return (count);
}

int	hexaprint(long nbr, char *base)
{
	long	nbr_final[8];
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (nbr < 0)
	{
		nbr += 4294967296;
		i = 0;
	}
	while (nbr > 0)
	{
		nbr_final[i++] = nbr % 16;
		nbr /= 16;
	}
	count = i;
	while (--i >= 0)
		ft_putchar(base[nbr_final[i]]);
	return (count);
}
