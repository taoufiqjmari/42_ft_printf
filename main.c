/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:25:53 by tjmari            #+#    #+#             */
/*   Updated: 2020/03/10 18:03:36 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	printf("printf: test no parameter\n");
	ft_printf("ft_printf: test no parameter\n");

	printf("printf: %c\n", 'P');
	ft_printf("ft_printf: %c\n", 'P');
	return (0);
}
