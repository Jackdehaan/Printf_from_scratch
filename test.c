/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-haa <jade-haa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 10:08:04 by jade-haa          #+#    #+#             */
/*   Updated: 2024/09/29 10:26:28 by jade-haa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
    int num = 42;
    char *str = "Hello, world!";
    char ch = 'A';
    int ret_ft, ret_std;

    ret_ft = ft_printf("Custom ft_printf: %s\n", str);
    ret_std = printf("Standard printf: %s\n", str);
    printf("Return values - ft_printf: %d, printf: %d\n\n", ret_ft, ret_std);

    ret_ft = ft_printf("Custom ft_printf: %c\n", ch);
    ret_std = printf("Standard printf: %c\n", ch);
    printf("Return values - ft_printf: %d, printf: %d\n\n", ret_ft, ret_std);

    ret_ft = ft_printf("Custom ft_printf: %d\n", num);
    ret_std = printf("Standard printf: %d\n", num);
    printf("Return values - ft_printf: %d, printf: %d\n\n", ret_ft, ret_std);

    ret_ft = ft_printf("Custom ft_printf: %x\n", num);
    ret_std = printf("Standard printf: %x\n", num);
    printf("Return values - ft_printf: %d, printf: %d\n\n", ret_ft, ret_std);

    ret_ft = ft_printf("Custom ft_printf: 100%% done!\n");
    ret_std = printf("Standard printf: 100%% done!\n");
    printf("Return values - ft_printf: %d, printf: %d\n\n", ret_ft, ret_std);

    return 0;
}