#include "ft_printf.h"

void treat_hex_lowercase(va_list args, int *counter)
{
    int num;
    char* hex;
    size_t i;
    size_t len;
    
    i = 0;
    num = va_arg(args,int);
    hex = ft_ull_base(num,16);
    hex = convert_to_lower(hex);
    len = ft_strlen(hex);
    *counter += (int)len;
     while(i < len){
        write(1,&hex[i],1);
        i++;
    }
    free(hex);
}