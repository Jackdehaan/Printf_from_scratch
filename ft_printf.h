/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-haa <jade-haa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:42:14 by jade-haa          #+#    #+#             */
/*   Updated: 2023/11/09 12:25:43 by jade-haa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar_ap(va_list ap);
int	ft_putstring_ap(va_list ap);
int	ft_putstring(char *s);
int	check(va_list ap, char format);
int	struct_to_long(va_list ap, char *base, int cap);
int	struct_to_int(va_list ap);
int	print_address(va_list ap, char *base);
int	ft_putnbr_base_recursive(unsigned long long nb, unsigned int len,
		char *base, int cap);
int	ft_strlen(char *str);
int	ft_putchar_cap(const char *c, int cap);
int	ft_putchar(const char a);
int	struct_to_unsigned_int(va_list ap, char *base, int cap);

#endif