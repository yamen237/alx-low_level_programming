#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of string
 * @str: take in string by poiter
 */
void puts_half(char *str)
{
iit n;
n = strlen(str);
int i;
if (n % 2 == 0)
{
n = n/2;
for (i = n; i < strlen(str); i ++)
{
putchar(*(str + i));
}
}
putchar('\n');
}
