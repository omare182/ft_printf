#include "ft_printf.h"

int ft_processing(va_list list, int c)
{
    int count;

    count = 0;
    if (c == 'c')
        count = ft_putchar(va_arg(list, int));
    if (c == 's')
        count = ft_putstr(va_arg(list, char *));
    if (c == 'p')
        count = ft_prin_pointer_hex(va_arg(list, void *));
    if (c == 'd' || c == 'i')
        count = ft_putnbr(va_arg(list, int));
    if (c == 'u')
        count = ft_putnbr_unis(va_arg(list, unsigned int));
    if (c == 'x' || c == 'X')
        count = ft_print_hex (va_arg(list, unsigned  int), c);
    if (c == '%')
    {
        write(1, "%", 1);
        count++;
    }
    return (count);
}
int ft_printf(const char * str, ...)
{
    int i;
    int c;

    i = 0;
    c = 0;
    va_list list;
    va_start(list, str);
    while(str[i])
    {
        if (str[i] == '%')
        {
           c += ft_processing(list, str[i+1]);
           i++;
        }
        else 
            write(1, &str[i], 1);
        i++;                
    }
    i += c;
    return (i);
}
int main()
{
    int i = ft_printf("%.p\n", NULL);
    int a = printf("%.p\n", NULL);
}