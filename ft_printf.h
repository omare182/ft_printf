#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

#include <stdio.h>

int ft_printf(const char *, ...);
int ft_processing(va_list list, int c);

int ft_putnbr(int n);
int ft_putnbr_unis(unsigned int n);
int ft_putchar(char c);
int ft_putstr(char *s);
int ft_print_hex (unsigned int n, char form);
int ft_hex(void * p);
int ft_prin_pointer_hex(void * p);
#endif