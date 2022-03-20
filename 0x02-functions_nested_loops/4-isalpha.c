#include "main.h"
/**
 * _isalpha - return 1 if letter(lowercase or uppercase)
 * @c: take in a character
 * Return: 1 for letter and 0 otherwise
 */
int _isalpha(int c)
{
char a = 'a';
char A = 'A';
while (a <= 'z' && A <= 'Z')
{
if (c == a || c == A)
{
return (1);
break;
}
a++;
A++;
}
return (0);
}
