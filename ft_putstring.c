/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-haa <jade-haa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:17:49 by jade-haa          #+#    #+#             */
/*   Updated: 2023/11/09 10:42:04 by jade-haa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstring_ap(va_list ap)
{
	char	*s;
	int		i;
	int		counter;

	counter = 0;
	i = 0;
	s = va_arg(ap, char *);
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (counter + i);
}

int	ft_putstring(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
