#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char a='a';
for (i = 0; i < 16; i++)
{
if (i < 10)
putchar(48 + i);
else
putchar(a++);
}
putchar('\n');
return (0);
}
