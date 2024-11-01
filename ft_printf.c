/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:03:34 by mcastrat          #+#    #+#             */
/*   Updated: 2024/10/30 16:31:31 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(const char str, va_list args)
{
	int	count;

	count = 0;
	if (str == 'c')
		count += ft_putchar(va_arg(args, int));
	if (str == 's')
		count += ft_putstr(va_arg(args, char *));
	if (str == 'p')
		count += ft_0xputpointer(va_arg(args, unsigned long long), 0);
	if (str == 'd' || str == 'i')
		count += ft_putnbr(va_arg(args, int));
	if (str == 'u')
		count += ft_unsignednb(va_arg(args, unsigned int));
	if (str == 'x')
		count += ft_hex(va_arg(args, unsigned int), 0);
	if (str == 'X')
		count += ft_hex(va_arg(args, unsigned int), 1);
	if (str == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (str == NULL)
		return (0);
	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += check(str[i], args);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
/*
#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int count1, count2;
    // Test avec une chaîne de caractères
	
    count1 = ft_printf("Hello, %s!\n", "world");
    count2 = printf("Hello, %s!\n", "world");
    printf("ft_printf count: %d, printf count: %d\n\n", count1, count2);

    // Test avec un pointeur
    count1 = ft_printf("Pointer address: %p\n", (void *)0x7ffeefbff5c8);
    count2 = printf("Pointer address: %p\n", (void *)0x7ffeefbff5c8);
    printf("ft_printf count: %d, printf count: %d\n\n", count1, count2);

    // Test avec des entiers
    count1 = ft_printf("Decimal: %d, Unsigned: %u\n", -42, 42);
    count2 = printf("Decimal: %d, Unsigned: %u\n", -42, 42);
    printf("ft_printf count: %d, printf count: %d\n\n", count1, count2);

    // Test avec des hexadécimaux
    count1 = ft_printf("Hexadecimal (lowercase): %x, Hexadecimal 
	(uppercase): %X\n", 255, 255);
    count2 = printf("Hexadecimal (lowercase): %x, Hexadecimal (uppercase):
	 %X\n", 255, 255);
    printf("ft_printf count: %d, printf count: %d\n\n", count1, count2);

    // Test avec un caractère '%'
    count1 = ft_printf("Percent sign: %%\n");
    count2 = printf("Percent sign: %%\n");
    printf("ft_printf count: %d, printf count: %d\n\n", count1, count2);
}
*/
