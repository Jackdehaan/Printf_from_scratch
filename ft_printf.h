/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-haa <jade-haa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:42:14 by jade-haa          #+#    #+#             */
/*   Updated: 2023/10/23 12:41:10 by jade-haa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	ft_printf(char *format, ...);
int	ft_putchar(va_list ap);
int	ft_putstring(va_list ap);
int	ft_putstring_ad(char *s);
int	check(va_list ap, char format);
int	struct_to_long(va_list ap, char *base, int cap);
int	struct_to_int(va_list ap);
int	ft_putchar3(char *c);
int	print_address(va_list ap, char *base);
int	ft_putnbr_base_recursive(long long nb, int len, char *base, int cap);
int	ft_strlen(char *str);
int	ft_putchar2(char *c, int cap);
int	struct_to_long(va_list ap, char *base, int cap);
int	ft_putchar_fd(char a, int fd);