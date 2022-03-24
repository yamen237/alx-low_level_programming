#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - print reverse string
 * @s: take in char by pointer
 * strlen retun the lenght of string
 */
void print_rev(char *s)
{
char c;
int i, n;
int nb = strlen(s) - 1;
for (i = 0; i <= nb; i++)
{
n = nb - i;
c = *(s + n);
_putchar(c);
}
_putchar('\n');
}
