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
char *c;
c = s;
int i;
for (i = 0; i < strlen(s); i++)
{
*(c + i) = *(s + strlen(s) - 1 - i);
}
puts(s);
puts(c);
}
