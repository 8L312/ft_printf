/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:57:35 by rmonney           #+#    #+#             */
/*   Updated: 2021/11/09 17:51:00 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

char	whatflag(const char *str, int i);
int		printer(const char *str, int i);
int		printcounter(const char *str, int i);
int		ft_printf(const char *str, ...);
void	ft_putstr(char *s);
void	ft_putnbr(int n);

#endif
