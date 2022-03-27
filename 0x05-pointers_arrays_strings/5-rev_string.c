#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string 
 * @s: take in character by pointer
 */
void rev_string(char *s)
{
char c;
char *a;
a = s;
int i;
int n;
n = strlen(s);
for (i = 0; i < strlen(s); i++)
{
n--;
c = *(s + n);
*(a + i) = c;
}
s = a;
}
