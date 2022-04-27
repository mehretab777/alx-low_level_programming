#include "main.h"
/**
 * _strlen_recursion -  returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int x;

	x = 0;
	if (*s == '\0')
		return (0);
	x = 1 + _strlen_recursion(s + 1);

	return (x);
}

