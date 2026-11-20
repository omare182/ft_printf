#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

#include <stdio.h>

int ft_printf(const char *, ...);
void ft_processing(va_list list, int c);

void ft_putnbr(int n);
void ft_putnbr_unis(unsigned int n);
void ft_putchar(char c);
void ft_putstr(char *s);
void ft_print_hex (unsigned int n, char form);
void ft_prin_pointer_hex(int n);
#endif