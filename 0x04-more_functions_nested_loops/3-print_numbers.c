#include "main.h"

/**
  * print_numbers - prints the numbers, from 0 to 9
  *@n: print number
  * Return: Always 0.
  */

void print_numbers(void)
{
int i;

i = 0;
while (i < 10)
{
_putchar (i + '0');
i++;
}

_putchar ('\n');

}
