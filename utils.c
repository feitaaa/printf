/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:04:19 by mcastrat          #+#    #+#             */
/*   Updated: 2024/10/29 23:15:50 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
int	ft_putstr(char *str)
{
	int i;

	i = 0;
	if(!str)
		str = "null";
	while(str[i])
		i++;
	write(1,str,i);
	return i;
}