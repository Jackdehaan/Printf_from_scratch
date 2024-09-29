/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-haa <jade-haa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:41:39 by jade-haa          #+#    #+#             */
/*   Updated: 2023/11/09 10:59:49 by jade-haa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(va_list ap, char format)
{
	if (format == 'c')
		return (ft_putchar_ap(ap));
	if (format == 's')
		return (ft_putstring_ap(ap));
	if (format == 'p')
		return (print_address(ap, "0123456789abcdef"));
	if (format == 'd')
		return (struct_to_int(ap));
	if (format == 'i')
		return (struct_to_int(ap));
	if (format == 'u')
		return (struct_to_unsigned_int(ap, "0123456789", 0));
	if (format == 'x')
		return (struct_to_unsigned_int(ap, "0123456789abcdef", 0));
	if (format == 'X')
		return (struct_to_unsigned_int(ap, "0123456789abcdef", 1));
	if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	ap;

	i = 0;
	count = 0;
	if (!format)
		return (-1);
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && (format[i + 1] == '\0'))
			return (-1);
		if (format[i] == '%')
		{
			i++;
			count += check(ap, format[i]);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
