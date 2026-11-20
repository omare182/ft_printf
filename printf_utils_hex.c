#include "ft_printf.h"

int ft_hex(void * p)
{
     char * base;
    unsigned long nb;
    int count;

    count = 0;
    base = "0123456789abcdef";
    nb = (unsigned long)p;
    count++;
    if(nb >= 16)
        ft_hex((void *)(nb / 16));
    ft_putchar(base[nb % 16]);
    return (count);
}
int  ft_prin_pointer_hex(void * p)
{

    int count;

    count = 0;
    if(!p)
    {
        count++;
        write(1, "(nil)", 5);
        return (count);
    }
    write(1, "0x", 2);

    count += ft_hex(p);
    return (count);
}