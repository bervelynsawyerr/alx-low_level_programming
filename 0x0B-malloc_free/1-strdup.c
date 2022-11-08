#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - allocates space in memory
 * @str: input string
 * Return: returns a pointer to a newly
 * allocated space in memory
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}
