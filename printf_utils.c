#include "libftprintf.h"

void ft_putchar(char c)
{
    write(1, &c , 1);
}
void ft_putstr(char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}
void ft_putnbr(int n)
{
    if(n == -2147483648)
    {
        write(1,"-2147483648", 11);
        return ;
    }
    if(n < 0)
    {
        n = -n;
        write(1, "-", 1);
    }
    if (n > 0)
    {
        ft_putnbr(n / 10);
        ft_putchar(n % 10 + '0');
    }
}
void ft_putnbr_unis(unsigned int n)
{
        ft_putnbr(n / 10);
        ft_putchar(n % 10 + '0');
}

void ft_print_hex (unsigned int n, char form)
{
   char *base;

    if (form == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
    if(n >= 16)
        ft_print_hex(n / 16, form);
    ft_putchar(base[n % 16]);
}