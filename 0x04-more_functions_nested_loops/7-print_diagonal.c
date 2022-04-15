#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: limit
 *
 * Return: void
 */

void print_diagonal(int n)
{
int i, j;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (i = 0; i < 1; i++)
{
_putchar (' ');
}
_putchar ('\\');
_putchar ('\n');
}
}
else
{
_putchar ('\n');
}
}

