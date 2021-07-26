#include "ft_printf.h"

void treat_pointer(va_list args, int *counter)
{
    char *str;
    long long int adress;
    char *adddress;
    int* adr;
    size_t start;
    size_t end;

    start = 0;
    adr = va_arg(args,int*);
    str = "0x";
    adress = (long long int)adr;
    adddress = ft_atoi_base(adress,16);
    adddress = convert_to_lower(adddress);
    adddress = ft_strjoin(str,adddress);// need to free adddress!!!!!!!!!!!!!!!!!!
    end = ft_strlen(adddress);
    *counter += (int)end;
    while(start < end){
        write(1,adddress+start,1);
        start++;
    }
    free(adddress);
} 