#include "holberton.h"

/**
 * print_sign - Compare "n" value
 * @n: If is mayor than 0 show return 1 else 0
 *
 * Return: 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
