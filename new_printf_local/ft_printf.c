/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:43:02 by ashakhky          #+#    #+#             */
/*   Updated: 2021/06/15 20:11:27 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// %[parameter][flags][width][.precision][length]type
#include "ft_printf.h"

int ft_printf(const char* str,...)
{
    va_list args;
	va_start(args, str);
    int i;
    int rtn; 

    rtn = 0;
    i = 0;
    while(*(str+i) != '%')
    {
        write(1, (str + i), 1);
        i++;
    }
    i++;

}