/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-haa <jade-haa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:17:41 by jade-haa          #+#    #+#             */
/*   Updated: 2023/11/09 12:32:37 by jade-haa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static int	ft_putnbr(int n)
{
	int	result;

	result = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	else
	{
		if (n < 0)
		{
			result += ft_putchar('-');
			n = -n;
		}
		if (n > 9)
		{
			result += ft_putnbr(n / 10);
			result += ft_putchar(n % 10 + '0');
		}
		if (n <= 9)
			result += ft_putchar(n + '0');
	}
	return (result);
}

int	ft_putnbr_base_recursive(unsigned long long nb, unsigned int len,
		char *base, int cap)
{
	static int	result;

	result = 0;
	if (nb >= len)
	{
		ft_putnbr_base_recursive(nb / len, len, base, cap);
	}
	++result;
	ft_putchar_cap(&base[nb % len], cap);
	return (result);
}

int	struct_to_unsigned_int(va_list ap, char *base, int cap)
{
	unsigned int	nb_long;
	int				len;
	int				result;

	result = 0;
	nb_long = va_arg(ap, unsigned int);
	len = ft_strlen(base);
	result = ft_putnbr_base_recursive(nb_long, len, base, cap);
	return (result);
}

int	struct_to_int(va_list ap)
{
	int			nb_int;
	static int	result;

	result = 0;
	nb_int = va_arg(ap, int);
	result = ft_putnbr(nb_int);
	return (result);
}
