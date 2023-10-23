/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-haa <jade-haa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:17:41 by jade-haa          #+#    #+#             */
/*   Updated: 2023/10/23 12:27:29 by jade-haa         ###   ########.fr       */
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

static int	ft_putnbr_fd(int n, int fd)
{
	int	result_fd;

	result_fd = 0;
	if (n == -2147483648)
		return (write(fd, "-2147483648", 11));
	else
	{
		if (n < 0)
		{
			result_fd += ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n > 9)
		{
			result_fd += ft_putnbr_fd(n / 10, fd);
			result_fd += ft_putchar_fd(n % 10 + '0', fd);
		}
		if (n <= 9)
			result_fd += ft_putchar_fd(n + '0', fd);
	}
	return (result_fd);
}

int	ft_putnbr_base_recursive(long long nb, int len, char *base, int cap)
{
	static int	result;

	result = 0;
	if (nb >= len)
	{
		ft_putnbr_base_recursive(nb / len, len, base, cap);
	}
	++result;
	ft_putchar2(&base[nb % len], cap);
	return (result);
}

int	struct_to_long(va_list ap, char *base, int cap)
{
	long long	nb_long;
	int			len;
	int			result;

	result = 0;
	nb_long = va_arg(ap, long long);
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
	result = ft_putnbr_fd(nb_int, 1);
	return (result);
}
