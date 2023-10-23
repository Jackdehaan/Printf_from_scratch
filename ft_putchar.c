/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-haa <jade-haa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:17:26 by jade-haa          #+#    #+#             */
/*   Updated: 2023/10/23 12:25:54 by jade-haa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 'a' + 'A');
	}
	return (c);
}

int	ft_putchar(va_list ap)
{
	char	c;

	c = va_arg(ap, int);
	write(1, &c, 1);
	return (1);
}

int	ft_putchar2(char *c, int cap)
{
	char	upper_c;

	if (cap == 1)
	{
		upper_c = ft_toupper(*c);
		write(1, &upper_c, 1);
	}
	else
	{
		write(1, c, 1);
	}
	return (1);
}

int	print_address(va_list ap, char *base)
{
	void	*nb;
	int		len;
	int		result;

	result = 0;
	nb = va_arg(ap, void *);
	len = ft_strlen(base);
	if (nb == NULL)
		return (ft_putstring_ad("(nil)"));
	if (nb == (void *)-1)
		return (ft_putstring_ad("0xffffffffffffffff"));
	write(1, "0x", 2);
	return (2 + (ft_putnbr_base_recursive((long long)nb, len,
				"0123456789abcdef", 0)));
}

int	ft_putchar_fd(char a, int fd)
{
	write(fd, &a, 1);
	return (1);
}
