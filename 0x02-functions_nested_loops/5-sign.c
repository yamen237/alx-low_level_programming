#include "main.h"
/**
 * print_sign - return the sign of number
 * @n: take in number
 * Return: 1 and print + if positive
 * Return: 0 and print 0 if zero
 * Return: -1 and print - if negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
