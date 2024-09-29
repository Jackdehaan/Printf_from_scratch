/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-haa <jade-haa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 10:08:04 by jade-haa          #+#    #+#             */
/*   Updated: 2024/09/29 10:46:19 by jade-haa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
    int num = 42;
    char *str = "Hello, world!";
    char ch = 'A';
    void *ptr = &num; // Example pointer
    unsigned int u_num = 4294967295; // Large unsigned number

    // Test %s
    ft_printf("Custom ft_printf (string): %s\n", str);
    printf("Standard printf (string): %s\n", str);

    // Test %c
    ft_printf("Custom ft_printf (char): %c\n", ch);
    printf("Standard printf (char): %c\n", ch);

    // Test %d
    ft_printf("Custom ft_printf (decimal): %d\n", num);
    printf("Standard printf (decimal): %d\n", num);

    // Test %i
    ft_printf("Custom ft_printf (integer): %i\n", num);
    printf("Standard printf (integer): %i\n", num);

    // Test %u
    ft_printf("Custom ft_printf (unsigned): %u\n", u_num);
    printf("Standard printf (unsigned): %u\n", u_num);

    // Test %x
    ft_printf("Custom ft_printf (hex lowercase): %x\n", num);
    printf("Standard printf (hex lowercase): %x\n", num);

    // Test %X
    ft_printf("Custom ft_printf (hex uppercase): %X\n", num);
    printf("Standard printf (hex uppercase): %X\n", num);

    // Test %p
    ft_printf("Custom ft_printf (pointer): %p\n", ptr);
    printf("Standard printf (pointer): %p\n", ptr);

    // Test %%
    ft_printf("Custom ft_printf (percent): %%\n");
    printf("Standard printf (percent): %%\n");

    return 0;
}