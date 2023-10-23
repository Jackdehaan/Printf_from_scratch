/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-haa <jade-haa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:41:39 by jade-haa          #+#    #+#             */
/*   Updated: 2023/10/23 11:41:51 by jade-haa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(va_list ap, char format)
{
	if (format == 'c')
		return (ft_putchar(ap));
	if (format == 's')
		return (ft_putstring(ap));
	if (format == 'p')
		return (print_address(ap, "0123456789abcdef"));
	if (format == 'd')
		return (struct_to_int(ap));
	if (format == 'i')
		return (struct_to_int(ap));
	if (format == 'u')
		return (struct_to_long(ap, "0123456789", 0));
	if (format == 'x')
		return (struct_to_long(ap, "0123456789abcdef", 0));
	if (format == 'X')
		return (struct_to_long(ap, "0123456789abcdef", 1));
	if (format == '%')
		return (ft_putchar2("%", 0));
	return (0);
}

int	ft_printf(char *format, ...)
{
	int		i;
	int		count;
	va_list	ap;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i])
				count += check(ap, format[i]);
		}
		else
			count += ft_putchar2(&format[i], 0);
		i++;
	}
	va_end(ap);
	return (count);
}

// int	main(void)
// {
// 	char	*p;

// 	p = "Hello, World";
// 	ft_printf("Single characters: %c\n", 'c');
// 	ft_printf("String: %s\n", "");
// 	ft_printf("Void pointer: %p\n", p);
// 	ft_printf("Decimal (base 10): %d\n", (int)-2147483648);
// 	ft_printf("Integer (base 10): %i\n", 15077634);
// 	ft_printf("Unsigned decimal (base 10): %u\n", 122); ///// testen
// 	ft_printf("Hexadecimal lowercase: %x\n", 204);
// 	ft_printf("Hexadecimal uppercase: %X\n", 444);
// 	ft_printf("Percent: %%\n");
// 	// ft_printf("anc%s %X %d", "psaidf", 34535 , 55);

// 	printf("\n\n%p\n\n\n %u", p, -3333);
// 	return (0);
// }

// int main(void)
// {
//     char *p;

//     p = "Hello, World";

//     int return_value; // Variable to store the return value of ft_printf

//     // Test 1
//     return_value = ft_printf("Single characters: %c\n", 'c');
//     printf("Test 1: ft_printf return (value: %d\n", return_value));

//     // Test 2
//     return_value = ft_printf("String: %s\n", "");
//     printf("Test 2: ft_printf return (value: %d\n", return_value));

//     // Test 3
//     return_value = ft_printf("Void pointer: %p\n", p);
//     printf("Test 3: ft_printf return (value: %d\n", return_value));

//     // Test 4
//     return_value = ft_printf("Decimal (base 10): %d\n", (int)-2147483648);
//     printf("Test 4: ft_printf return (value: %d\n", return_value));

//     // Test 5
//     return_value = ft_printf("Integer (base 10): %i\n", 15077634);
//     printf("Test 5: ft_printf return (value: %d\n", return_value));

//     // Test 6
//     return_value = ft_printf("Unsigned decimal (base 10): %u\n", 122);
//     printf("Test 6: ft_printf return (value: %d\n", return_value));

//     // Test 7
//     return_value = ft_printf("Hexadecimal lowercase: %x\n", 204);
//     printf("Test 7: ft_printf return (value: %d\n", return_value));

//     // Test 8
//     return_value = ft_printf("Hexadecimal uppercase: %X\n", 444);
//     printf("Test 8: ft_printf return (value: %d\n", return_value));

//     // Test 9
//     return_value = ft_printf("Percent: %%\n");
//     printf("Test 9: ft_printf return (value: %d\n", return_value));

//     return (0);
// }
