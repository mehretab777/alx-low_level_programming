#include "main.h"

/**
 * print_square -  prints a square
 * @size:limit
 *
 * Return: void
 */
void print_square(int size)
{
int i, j;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (i = 0; i < size; i++) 
{
_putchar ('# ');
}
_putchar ('\n');  
}
}
else
{
_putchar ('\n');  
}
}
