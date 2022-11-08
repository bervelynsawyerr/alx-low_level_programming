#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 * Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	char *cpy;

	for (; dest[len] != '\0'; len++)
		;

	cpy = dest + len;
	while (*src != '\0')
		*cpy++ = *src++;
	*cpy = '\0';

	return (dest);
}
