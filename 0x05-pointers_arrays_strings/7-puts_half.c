#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of string
 * @str: take in string by poiter
 */
void puts_half(char *str)
{
int n;
n = strlen(str);
int i;
if (n % 2 == 0)
{
for (i = n/2; i < strlen(str); i ++)
{
putchar(*(str + i));
}
}
else
{
n = (n - 1)/2;
for (i = n + 1; i < strlen(str); i++)
{
putchar(*(str + i));
}
}
putchar('\n');
}
