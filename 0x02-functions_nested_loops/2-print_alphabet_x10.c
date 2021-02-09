#include "holberton.h"

/**
 * print_alphabet_x10 - function print alphabet x10
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
int all, re;

for (re = 1; re <= 10 ; re++)
{
for (all = 'a'; all <= 'z'; all++)
{
_putchar(all);
}
_putchar('\n');
}
}
