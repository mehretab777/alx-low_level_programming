#include "main.h"

/**
 * _puts - print a string
 * @str: A pointer to an int that will be changed
 *
 * Return: void means our answer is correct
 */

void _puts(char *str)
{
char *c;
int n;

c = str;

for (m = 0; c[m]; m++)
{
_putchar (c[m]);
}
_putchar ('\n');
}

