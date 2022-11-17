/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aboutstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osavas <osavas@student.42kocaeli.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:45:27 by osavas            #+#    #+#             */
/*   Updated: 2022/06/25 16:45:31 by osavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putcharv2(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstrv2(char *str)
{
	int	x;

	if (str == 0)
	{
		write(1, "(null)", 6);
		return (6);
	}
	x = -1;
	while (str[++x])
		ft_putcharv2(*(str + x));
	return (x);
}
