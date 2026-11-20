#include "libftprintf.h"

void ft_prin_pointer_hex(void * p)
{
    char * base;
    unsigned long nb;

    base = "0123456789abcdef";
    nb = (unsigned long)p;
    if(nb >= 16){
        i = nb / 16;
        m = &i;
        ft_prin_pointer_hex(m);}
    ft_putchar(base[nb % 16]);
}