#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int k;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (k = 48; k < 58; k++)
{
if (i < j)
{
if (j < k)
{
putchar(i);
putchar(j);
putchar(k);
if (i < 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
