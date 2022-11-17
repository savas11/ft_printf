/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osavas <osavas@student.42kocaeli.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:45:45 by osavas            #+#    #+#             */
/*   Updated: 2022/06/25 18:16:24 by osavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	checksign(const char *str)
{
	if (*str == '%')
	{
		return (1);
	}
	else
		return (0);
}

int	format(const char *str, va_list start)
{
	int	returnval;

	returnval = 0;
	if (*str == 's')
		returnval = ft_putstrv2(va_arg(start, char *));
	else if (*str == 'c')
		returnval = ft_putcharv2(va_arg(start, int));
	else if (*str == 'd' || *str == 'i')
		ft_putnbrv2(va_arg(start, int), &returnval);
	else if (*str == 'u')
		ft_putnbru(va_arg(start, unsigned int), &returnval);
	else if (*str == 'x')
		ft_lowerhexadecimal(va_arg(start, unsigned int), &returnval);
	else if (*str == 'X')
		ft_upperhexadecimal(va_arg(start, unsigned int), &returnval);
	else if (*str == 'p')
	{
		write(1, "0x", 2);
		ft_putpointer(va_arg(start, unsigned long), &returnval);
	}
	else if (*str == '%')
		returnval = ft_putcharv2('%');
	return (returnval);
}

int	ft_printf(const char *str, ...)
{
	va_list	start;
	int		counter;
	int		returnval;

	va_start(start, str);
	counter = -1;
	returnval = 0;
	while (str[++counter])
	{
		if (checksign((str + counter)))
		{
			counter++;
			returnval += format((str + counter), start);
		}
		else
			returnval += ft_putcharv2(*(str + counter));
	}	
	va_end(start);
	return (returnval);
}
