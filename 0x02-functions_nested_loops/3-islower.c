#include "main.h"
/**
 * -islower - show lowercse
 */
int _islower(int c)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
if (c == a)
{
return (1);
break;
}
}
return (0);
}
