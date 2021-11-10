/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:03:21 by rmonney           #+#    #+#             */
/*   Updated: 2021/11/09 17:47:48 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

char	whatflag(const char *str, int i)
{
	char	flag;

	flag = 0;
	while (str[i] != '%')
		i++;
	if (str[i + 1] == '%')
		whatflag(str, (i + 2));
	else
		flag = str[i + 1];
	return (flag);
}

int	printer(const char *str, int i)
{
	while (str[i++] != '%')
		write(1, &str[i], 1);
	if (str[i + 1] == '%')
	{
		write(1, "%", 1);
		i = printer(str, (i + 2));
	}
	i += 2;
	return (i);
}

int	printcounter(const char *str, int i)
{
	int	count;

	count = 0;
	while (str[i++] != '%')
		count++;
	if (str[i + 1] == '%')
	{
		count++;
		count += printcounter(str, (i + 2));
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	char	flag;
	va_list	args;

	va_start(args, str);
	i = 0;
	while (str[i] != '\0')
	{
		i = printer(str, i);
		flag = whatflag(str, i);
		count += printcounter(str, i);
		if (flag == 'c')
			count += charprint(va_arg(args, char));
		if (flag == 's')
			count += strprint(va_arg(args, char *));
		if (flag == 'p')
			count += ptrptrint(va_arg(args, void *));
		if (flag == 'd' || flag == 'i' || flag == 'u')
			count += intprinter(va_arg(args, int), flag);
		if (flag == 'x' || flag == 'X')
			count += hexaprint(va_arg(args, int), flag);
	}
	va_end(args);
	return (count);
}
