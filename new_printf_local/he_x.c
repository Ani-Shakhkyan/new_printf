#include "ft_printf.h"


char* convert_to_lower(char *str)
{
    size_t i = 0;
    while(i < ft_strlen(str)){
        str[i] = ft_tolower(str[i]);
        i++;
    }
    return str;
}
void treat_hex_uppercase(va_list args, int* counter)
{
    int num;
    char* hex;
    size_t i;
    size_t len;
    
    i = 0;
    num = va_arg(args,int);
    hex = ft_atoi_base(num,16);
    len = ft_strlen(hex);
    *counter += (int)len;
    while(i < len){
        write(1,&hex[i],1);
        i++;
    }
    free(hex);
}
// int variadic(char *str,...)
// {
//     va_list args;
// 	va_start(args, str);
//     treat_hex_uppercase(args);
//     return 0;
// }
// int main()
// {
//     variadic("hello",200);
//     return(0);
// }