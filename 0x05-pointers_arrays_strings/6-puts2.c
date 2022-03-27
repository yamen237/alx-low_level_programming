#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * puts2 - print every other character of à string
 * @str: take in string by pointer
 */
void puts2(char *str)
{
int i;
int nb;
char c;
nb = strlen(str);
for (i = 0; i < nb; i += 2)
{
c = *(str + i);
putchar(c);
}
putchar('\n');
}
