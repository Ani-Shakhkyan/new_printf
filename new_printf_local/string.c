#include "ft_printf.h"

void treat_string(va_list args, int *counter)
{
    char* string;
    size_t len;
    size_t i;

    i = 0;
    string = va_arg(args,char*);
    len = ft_strlen(string);
    *counter += (int)len;
    while(i < len){
        write(1,&string[i],1);
        i++;
    }
}
void treat_char(va_list args, int *counter)
{
    char string;
    string = va_arg(args,int);
    *counter++;
    write(1,&string,1);
}