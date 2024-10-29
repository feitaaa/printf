/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:03:34 by mcastrat          #+#    #+#             */
/*   Updated: 2024/10/29 23:34:10 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(const char str, va_list args)
{
	int count;

	count = 0;
	if (str == 'c')
		count += ft_putchar(va_arg(args, int));
	if (str == 's')
		count += ft_putstr(va_arg(args, char *));
	//if (str== 'p')
	//	c
	return (count);
}


int	ft_printf(const char *str, ...)
{
	va_list args;
	int i;
	int	count;

	if (str == NULL)
		return (0);
	i = 0;
	count = 0;	
	va_start(args, str);
	while (str[i])
	{
		if(str[i] == '%')
		{
			i++;
			count += check(str[i], args);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return count;
}

int main(void)
{
	char kk[] = "matt";
	char s[] = "salut matt, NN = !";
	int i =0;
	printf("%d \n", ft_printf("salut %s, NN = %c\n", kk, '!'));
	printf("salut %s, NN = %c \n", kk, '!');
	while(s[i])
		i++;
	s[i] = '\0';
	printf("%d", i);
}