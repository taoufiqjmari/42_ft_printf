/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_character.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 16:27:06 by tjmari            #+#    #+#             */
/*   Updated: 2020/03/10 23:21:26 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_character(void)
{
	if (g_vars.width > 1)
	{
		g_vars.spaces = g_vars.width - 1;
		if (g_vars.minus == 1)
		{
			ft_putchar_fd(va_arg(g_vars.ap, int), 1);
			ft_spaces();
		}
		else
		{
			ft_spaces();
			ft_putchar_fd(va_arg(g_vars.ap, int), 1);
		}
	}
	else
		ft_putchar_fd(va_arg(g_vars.ap, int), 1);
}
