#include "ft_printf.h"

void treat_percent(int *counter)
{
    char p = '%';
    write(1,&p,1);
    *counter++;;
}