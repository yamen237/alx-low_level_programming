#include "main.h"
#include <stdio.h>
/**
 * print_array print the elements of array
 * @a array to print
 * @n lenght of array to print
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n; i++)
{
if (a[i])
printf("%d", a[i]);
if (i < n )
putchar(',');
}
putchar('\n');
}
