#include "main.h"
/**
 * _islower -  Return: 0 otherwise 1 for uppercase
 *  Return: 0 otherwise 1 for uppercase
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
