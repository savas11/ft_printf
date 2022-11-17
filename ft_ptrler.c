/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aboutptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osavas <osavas@student.42kocaeli.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:45:05 by osavas            #+#    #+#             */
/*   Updated: 2022/06/25 16:45:10 by osavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_lowerhexadecimal(unsigned int nbr, int *returnval)
{
	if (nbr > 15)
	{
		(*returnval)++;
		ft_lowerhexadecimal((nbr / 16), returnval);
		write(1, &(nbr % 16)["0123456789abcdef"], 1);
	}
	else
	{
		(*returnval)++;
		write(1, &(nbr % 16)["0123456789abcdef"], 1);
	}
}

void	ft_upperhexadecimal(unsigned int nbr, int *returnval)
{
	if (nbr > 15)
	{
		(*returnval)++;
		ft_upperhexadecimal((nbr / 16), returnval);
		write(1, &(nbr % 16)["0123456789ABCDEF"], 1);
	}
	else
	{
		(*returnval)++;
		write(1, &(nbr % 16)["0123456789ABCDEF"], 1);
	}
}

void	ft_putpointer(unsigned long nbr, int *returnval)
{
	if (nbr > 15)
	{
		(*returnval)++;
		ft_putpointer(nbr / 16, returnval);
		write(1, &(nbr % 16)["0123456789abcdef"], 1);
	}
	else
	{
		(*returnval) += 3;
		write(1, &(nbr % 16)["0123456789abcdef"], 1);
	}
}
