/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 14:53:29 by tjmari            #+#    #+#             */
/*   Updated: 2020/03/11 12:44:45 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct	s_vars
{
	va_list		ap;
	char		*str;
	int			width;
	int			minus;
	int			zero;
	int			precision;
	int			precision_value;
	int			spaces;
	int			ret;
}				t_vars;
t_vars			g_vars;

int				ft_printf(const char *format, ...);
int				ft_parameters(void);
void			ft_width(void);
void			ft_precision(void);
void			ft_character(void);
void			ft_string(char *string);
void			ft_pointer(void);
void			ft_integer(void);
void			ft_unsigned_int(void);
void			ft_hexadecimal(void);
void			ft_percent(void);
void			ft_spaces(void);
void			ft_zeros(void);
size_t			ft_strlen(const char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);

#endif
