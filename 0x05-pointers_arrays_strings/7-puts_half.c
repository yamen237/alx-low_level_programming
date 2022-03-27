#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of string
 * @str: take in string by poiter
 */
void puts_half(char *str)
{
int n, i, len;
for (len = 0; str[len] != '\0'; len++)
{}
n = (len - 1) / 2;
for (i = n + 1; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
}
