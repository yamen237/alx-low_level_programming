#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: string to be reverse
 */
void rev_string(char *s)
{
int i, j, length;
char a, c;
for (length = 0; s[length] != '\0'; length++)
{}
j = length - 1;
i = 0;

while (j > i)
{
a = s[i];
c = s[j];
s[i] = c;
s[j] = a;
j--;
i++;
}
}
