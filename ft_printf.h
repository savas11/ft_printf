/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osavas <osavas@student.42kocaeli.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:46:02 by osavas            #+#    #+#             */
/*   Updated: 2022/06/25 16:46:06 by osavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putcharv2(char c);
int		ft_putstrv2(char *str);

void	ft_lowerhexadecimal(unsigned int nbr, int *returnval);
void	ft_upperhexadecimal(unsigned int nbr, int *returnval);
void	ft_putpointer(unsigned long nbr, int *returnval);

void	ft_putnbrv2(int nbr, int *returnval);
void	ft_putnbru(unsigned int nbr, int *returnval);

int		checksign(const char *str);
int		dosign(const char *str, va_list start);
int		ft_printf(const char *str, ...);
#endif
