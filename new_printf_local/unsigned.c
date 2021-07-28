#include "ft_printf.h"

void treat_unsigned(va_list args, int *counter)
{
    unsigned int num;
    char* str_num;
    size_t i;
    size_t len;

    i = 0;
    num = va_arg(args,unsigned int);
    str_num = ft_ull_base(num,10);
    len = ft_strlen(str_num);
    *counter += (int)len;
    while(i < len){
        write(1,&str_num[i],1);
        i++;
    }
    free(str_num);
}