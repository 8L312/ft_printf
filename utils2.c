/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:25:17 by rmonney           #+#    #+#             */
/*   Updated: 2021/11/10 18:12:08 by rmonney          ###   ########.fr       */
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
		count = hexaprint_min(n);
	if (flag == 'X')
		count = hexaprint_maj(n);
	return (count);
}

int	hexaprint_maj(int n)
{
	int	count;

	count = 0;
	return (count);
}

int	hexaprint_min(int n)
{
	int	count;

	count = 0;
	return (count);
}
