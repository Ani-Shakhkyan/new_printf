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

#include "ft_printf.h"
void use_specifier(va_list args,char specifier, int *counter)
{
    if( specifier == 's')
        treat_string(args,counter);
    else if(specifier == 'p')
        treat_pointer(args,counter);
    else if(specifier == 'd' || specifier == 'i')
        treat_dec(args,counter);
    else if(specifier == 'x')
        treat_hex_lowercase(args,counter);
    else if(specifier == 'X')
        treat_hex_uppercase(args, counter);
    else if(specifier == 'u')
        treat_unsigned(args,counter);
    else if(specifier == 'c')
        treat_char(args, counter);
}
int ft_printf(const char* str,...)
{
    va_list args;
	va_start(args, str);
    int i;
    int rtn; 

    rtn = 0;
    i = 0;
    while(*(str+i) != '\0'){
        while(*(str+i) != '%')
    {
        write(1, (str + i), 1);
        i++;
        rtn++;
    }
    i++;
    use_specifier(args,*(str+i),&rtn);
    }
    return rtn;
}
int main()
{
    char *name = "Ani";
    ft_printf("my name is %s", name);
    return 0;
}