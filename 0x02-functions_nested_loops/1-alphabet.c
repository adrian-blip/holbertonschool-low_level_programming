#include "holberton.h"

/**
 * print_alphabet - The funcion.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int x;

for (x = 'a' ; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
