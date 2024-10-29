/* ************************************************************************** */ /*                                                                            */ /*                                                        :::      ::::::::   */ /*   printf.h                                           :+:      :+:    :+:   */ /*                                                    +:+ +:+         +:+     */ /*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */ /*                                                +#+#+#+#+#+   +#+           */ /*   Created: 2024/10/29 21:53:05 by mcastrat          #+#    #+#             */ /*   Updated: 2024/10/29 21:53:26 by mcastrat         ###   ########.fr       */ /*                                                                            */ /* ************************************************************************** */

#ifndef	FT_PRINTF
# define FT_PRINTF

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);

#endif