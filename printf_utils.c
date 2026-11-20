#include "ft_printf.h"

int ft_putchar(char c)
{
    write(1, &c , 1);
    return (1);
}
int ft_putstr(char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
    return (i);
}
int ft_putnbr(int n)
{
    int count;

    count = 0;
    if(n == -2147483648)
    {
        write(1,"-2147483648", 11);
        count += 11;
        return (count);
    }
    if(n < 0)
    {
        n = -n;
        write(1, "-", 1);
        count++;
    }
    if (n > 9)
    {
        ft_putnbr(n / 10);
        count++;
    }
    count += ft_putchar(n % 10 + '0');
    return (count);
}
int ft_putnbr_unis(unsigned int n)
{
    int count;

    count = 0;
    count = ft_putnbr(n / 10);
    ft_putchar(n % 10 + '0');

    return (count);
}

int ft_print_hex (unsigned int n, char form)
{
    char *base;
    int count;

    count = 0;
    if (form == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
    count++;
    if(n >= 16)
        ft_print_hex(n / 16, form);
    ft_putchar(base[n % 16]);
    return (count);
}