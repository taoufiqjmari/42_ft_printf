/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:25:53 by tjmari            #+#    #+#             */
/*   Updated: 2020/03/11 18:17:48 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	printf("   %d\n", printf("   printf: %.s", (char *)97));
	printf("%d\n", ft_printf("ft_printf: %.s", (char *)97));
	system("leaks a.out");
	return (0);
}
