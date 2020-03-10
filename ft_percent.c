/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 20:26:29 by tjmari            #+#    #+#             */
/*   Updated: 2020/03/11 00:46:35 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_percent(void)
{
	if (g_vars.width > 1)
	{
		g_vars.spaces = g_vars.width - 1;
		if (g_vars.minus == 1)
		{
			ft_putchar_fd('%', 1);
			ft_spaces();
		}
		else
		{
			if (g_vars.zero == 1)
				ft_zeros();
			else
				ft_spaces();
			ft_putchar_fd('%', 1);
		}
	}
	else
		ft_putchar_fd('%', 1);
}
