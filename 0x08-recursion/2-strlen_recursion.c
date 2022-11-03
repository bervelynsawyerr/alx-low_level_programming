#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: The string
 * Return: lenght
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == 0)
		return (0);

	length = _strlen_recursio(s + 1);

	return (lenght + 1);
}
