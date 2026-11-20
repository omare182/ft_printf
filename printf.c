#include "libftprintf.h"

void ft_processing(va_list list, int c)
{
    if (c == 'c')
        ft_putchar(va_arg(list, int));
    if (c == 's')
        ft_putstr(va_arg(list, char *));
    if (c == 'p')
        ft_prin_pointer_hex(va_arg(list, void *));
    if (c == 'd' || c == 'i')
        ft_putnbr(va_arg(list, int));
    if (c == 'u')
        ft_putnbr_unis(va_arg(list, unsigned int));
    if (c == 'x' || c == 'X')
        ft_print_hex (va_arg(list, int), c);
    if (c == '%')
        write(1, "%", 1);
}
int ft_printf(const char * str, ...)
{
    int i;

    i = 0;
    va_list list;
    va_start(list, str);
    while(str[i])
    {
        if (str[i] == '%')
        {
           ft_processing(list, str[i+1]);
           i++;
        }
        else 
            write(1, &str[i], 1);
        i++;                
    }
    return (i);
}
int main()
{
        int * b;
   /* int i = ft_printf(" %X \n ****** \nhello %u my name%% \nand %i iam (%c)\n string : %s  \n *** %p", 255 ,-1 , 20, 'c',"hello \n",b);
  //  printf("************\n%d\n*************\n  %p",i, i);
    
    
    
    //int a = printf(" %X \n ****** \nhello %u my name%% \nand %i iam (%c)\n string : %s", 255 ,-1 , 20, 'c',"hello");
    printf("************\n%p\n*************",b); */


   int i = ft_printf("hello %p\n", b);
    printf("hello %p\n", b);
}