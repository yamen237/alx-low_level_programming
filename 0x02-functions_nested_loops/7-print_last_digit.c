#includ-e <stdio.h>
/**
 * print_last_digit - print the last digit of number
 * @n: take in integer
 * Return: return the last digit
 */
int print_last_digit(int n)
{
if ( n > -9 && n < 0)
return (-1 * n);
else if (n > 0 && n < 9)
return (n);
else if (n < -9)
return ((-1 * n) % 10);
else if (n > 9)
return n % 10;
}
