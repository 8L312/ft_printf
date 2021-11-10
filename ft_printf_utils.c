/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:56:08 by rmonney           #+#    #+#             */
/*   Updated: 2021/11/09 13:24:53 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			write(1, &s[i], 1);
			i ++;
		}
	}
}

void	ft_putnbr(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(1, &"-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10);
		ft_putnbr_fd(nb % 10);
	}
	else
	{
		nb += 48;
		write(1, &nb, 1);
	}
}
