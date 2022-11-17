/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aboutnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osavas <osavas@student.42kocaeli.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:44:50 by osavas            #+#    #+#             */
/*   Updated: 2022/06/25 16:44:53 by osavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrv2(int nbr, int *returnval)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		*returnval = 11;
		return ;
	}
	else if (nbr > 9)
	{
		(*returnval)++;
		ft_putnbrv2(nbr / 10, returnval);
		ft_putcharv2(nbr % 10 + 48);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		(*returnval)++;
		ft_putnbrv2(nbr, returnval);
	}
	else
	{
		*returnval += ft_putcharv2(nbr + 48);
	}
}

void	ft_putnbru(unsigned int nbr, int *returnval)
{
	if (nbr > 9)
	{
		(*returnval)++;
		ft_putnbru(nbr / 10, returnval);
		ft_putcharv2(nbr % 10 + 48);
	}
	else
		*returnval += ft_putcharv2(nbr + 48);
}
