#include "main.h"
/**
 * -islower - show if char is lowercse or no
 */
int _islower(int c)
{
int n = 0;
char a;

for (a = 'a'; a <= 'z'; a++)
{
if (c == a)
{
return 1;
break;
}
}
return 0;
}
